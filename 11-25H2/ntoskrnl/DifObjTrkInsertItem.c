/*
 * XREFs of DifObjTrkInsertItem @ 0x14060BD30
 * Callers:
 *     <none>
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1403EA890 (RtlInsertElementGenericTableAvl.c)
 *     DifIsValidTrackingObject @ 0x14060BBFC (DifIsValidTrackingObject.c)
 *     DifObjTrkGetPluginContext @ 0x14060BD10 (DifObjTrkGetPluginContext.c)
 *     DifAcquireSpinLockAtDpcLevelSafe @ 0x14060DE24 (DifAcquireSpinLockAtDpcLevelSafe.c)
 *     DifReleaseSpinLockFromDpcLevelSafe @ 0x14060DEDC (DifReleaseSpinLockFromDpcLevelSafe.c)
 *     MmGetVaTypeForVerifier @ 0x140669BE4 (MmGetVaTypeForVerifier.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall DifObjTrkInsertItem(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  unsigned int *PluginContext; // r14
  PEX_SPIN_LOCK v8; // rbx
  int VaTypeForVerifier; // eax
  volatile LONG *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  BOOLEAN NewElement[4]; // [rsp+20h] [rbp-30h] BYREF
  _WORD v15[2]; // [rsp+24h] [rbp-2Ch] BYREF
  _DWORD Buffer[2]; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int64 v17; // [rsp+30h] [rbp-20h]
  __int64 v18; // [rsp+38h] [rbp-18h]

  v3 = a3;
  Buffer[1] = 0;
  v15[0] = 0;
  if ( KeGetCurrentIrql() > 2u )
    return 3221225659LL;
  result = DifIsValidTrackingObject(a1, a2);
  if ( (int)result < 0 )
    return result;
  PluginContext = (unsigned int *)DifObjTrkGetPluginContext(a1);
  if ( !PluginContext )
    return 3221225659LL;
  v8 = DifObjTrkContext;
  if ( (unsigned __int64)*((unsigned int *)DifObjTrkContext + 206) >= *((_QWORD *)DifObjTrkContext + 104) )
    return 3221225998LL;
  VaTypeForVerifier = MmGetVaTypeForVerifier(a2);
  if ( VaTypeForVerifier == 5 )
    return 3221225485LL;
  Buffer[0] = a1;
  v17 = a2;
  v10 = &v8[30 * VaTypeForVerifier];
  v11 = *PluginContext;
  if ( (_DWORD)v11 )
    v12 = a2 + v11;
  else
    v12 = a2 + v3;
  v18 = v12;
  NewElement[0] = 0;
  DifAcquireSpinLockAtDpcLevelSafe(v15);
  RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v10 + 16), Buffer, 0x18u, NewElement);
  if ( NewElement[0] )
  {
    ++*((_DWORD *)DifObjTrkContext + 206);
    v13 = v17;
    if ( *((_DWORD *)v10 + 27) == 1 )
    {
      *((_QWORD *)v10 + 22) = v17;
      *((_QWORD *)v10 + 21) = v17;
    }
    else
    {
      if ( v17 < *((_QWORD *)v10 + 21) )
      {
        *((_QWORD *)v10 + 21) = v17;
        v13 = v17;
      }
      if ( v13 > *((_QWORD *)v10 + 22) )
        *((_QWORD *)v10 + 22) = v13;
    }
  }
  DifReleaseSpinLockFromDpcLevelSafe(v15);
  return 0LL;
}
