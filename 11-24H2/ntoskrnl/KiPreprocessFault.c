/*
 * XREFs of KiPreprocessFault @ 0x1403F4D80
 * Callers:
 *     KiDispatchException @ 0x1403D5EB0 (KiDispatchException.c)
 * Callees:
 *     KiOpDecode @ 0x1403F5100 (KiOpDecode.c)
 *     KiOp_Mov @ 0x1403F54D0 (KiOp_Mov.c)
 *     KiOp_Priv @ 0x1403F5670 (KiOp_Priv.c)
 *     KiCheckForAtlThunk @ 0x1403F56F8 (KiCheckForAtlThunk.c)
 *     KiOpPreprocessSecureFault @ 0x1403F5A10 (KiOpPreprocessSecureFault.c)
 *     KiEnableOptionalXStateFeatures @ 0x1403F5AF8 (KiEnableOptionalXStateFeatures.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KiOpCheckUnhandledSecurePciAccessViolation @ 0x1405C2898 (KiOpCheckUnhandledSecurePciAccessViolation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiPreprocessFault(int *BugCheckParameter2, ULONG_PTR BugCheckParameter3, unsigned __int8 a3)
{
  int v3; // eax
  char v4; // si
  __int16 v8; // ax
  void *v9; // rcx
  void *v10; // rdx
  bool v11; // cf
  unsigned int v12; // r14d
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(_QWORD); // rax
  char v17; // di
  struct _KTHREAD *CurrentThread; // rcx
  void *v20; // rax
  unsigned __int16 SListFaultCount; // ax
  unsigned __int16 v22; // ax
  _OWORD v23[3]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v24; // [rsp+60h] [rbp-9h]
  __int128 v25; // [rsp+70h] [rbp+7h]
  __int128 v26; // [rsp+80h] [rbp+17h]
  __int128 v27; // [rsp+90h] [rbp+27h]

  v3 = *BugCheckParameter2;
  v4 = 0;
  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( v3 != 268435460 )
  {
    switch ( v3 )
    {
      case 268435457:
        v12 = 0x80000000;
        *BugCheckParameter2 = -1073741819;
        goto LABEL_8;
      case 268435458:
        break;
      case 268435459:
        v12 = 0x20000000;
        *BugCheckParameter2 = -1073741676;
        goto LABEL_8;
      case 268435462:
        v4 = 1;
        if ( !(unsigned __int8)KiOpPreprocessSecureFault((ULONG_PTR)BugCheckParameter2, BugCheckParameter3) )
          goto LABEL_2;
        return 1;
      case 268435463:
        *BugCheckParameter2 = -1073741819;
        v12 = 0x4000000;
        goto LABEL_8;
      case 268435472:
        if ( (int)KiEnableOptionalXStateFeatures(KeGetCurrentThread(), *((_QWORD *)BugCheckParameter2 + 4)) >= 0 )
          return 1;
        break;
      default:
        return 0;
    }
    v12 = 0x40000000;
    *BugCheckParameter2 = -1073741795;
LABEL_8:
    v13 = KiOpDecode((_DWORD)BugCheckParameter2, BugCheckParameter3, a3, v12, (__int64)v23);
    if ( v13 < 0 )
    {
      v17 = 0;
    }
    else
    {
      if ( v4 )
      {
        HIDWORD(v24) |= 0x2000000u;
        *((_QWORD *)&v27 + 1) = -1LL;
      }
      v15 = *((_QWORD *)&v26 + 1);
      if ( *((_QWORD *)&v26 + 1) )
      {
        v16 = *(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v26 + 1) + 16LL);
        if ( v16 == KiOp_Mov )
        {
          v13 = KiOp_Mov(v23);
        }
        else if ( v16 == KiOp_Priv )
        {
          v13 = KiOp_Priv(v23);
        }
        else
        {
          v13 = guard_dispatch_icall_no_overrides(v23, v14);
        }
      }
      v17 = 0;
      if ( v13 >= 0 )
      {
        if ( v15 )
        {
          v17 = v27;
          if ( (_BYTE)v27 )
            return v17;
        }
      }
    }
    if ( v12 == 0x80000000 )
    {
      if ( *BugCheckParameter2 == -1073741819 && !BYTE1(v27) )
      {
        BugCheckParameter2[6] = 2;
        *((_QWORD *)BugCheckParameter2 + 4) = 0LL;
        *((_QWORD *)BugCheckParameter2 + 5) = -1LL;
      }
    }
    else if ( v12 == 0x8000000 )
    {
      if ( (int)KiCheckForAtlThunk(v23) >= 0 )
        return v27;
    }
    else if ( v12 == 0x10000000 && (HIDWORD(v24) & 0x2000000) != 0 )
    {
      KiOpCheckUnhandledSecurePciAccessViolation(v23, BugCheckParameter2);
      if ( *BugCheckParameter2 == 268435465 )
        KeBugCheckEx(
          0x1EAu,
          *((_QWORD *)BugCheckParameter2 + 4),
          *((_QWORD *)BugCheckParameter2 + 5),
          *((_QWORD *)BugCheckParameter2 + 6),
          *((_QWORD *)BugCheckParameter2 + 7));
    }
    return v17;
  }
LABEL_2:
  v8 = *(_WORD *)(BugCheckParameter3 + 56);
  if ( v8 == 16 )
  {
    v9 = &ExpInterlockedPopEntrySListFault;
    v10 = &ExpInterlockedPopEntrySListResume;
  }
  else
  {
    if ( v8 != 51 )
      goto LABEL_6;
    v9 = (void *)qword_140FC7500;
    v10 = (void *)qword_140FC7508;
  }
  if ( *(void **)(BugCheckParameter3 + 248) == v9 )
  {
    if ( v8 == 16 )
    {
      *(_QWORD *)(BugCheckParameter3 + 248) = v10;
      if ( (_BYTE)KiKernelCetEnabled && (*(_DWORD *)(BugCheckParameter3 + 48) & 0x100080) == 0x100080 )
        *(_QWORD *)(*(int *)(BugCheckParameter3 + 1256) + BugCheckParameter3 + 1240) = v10;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v20 = (void *)*((_QWORD *)BugCheckParameter2 + 5);
      if ( v20 == CurrentThread->SListFaultAddress )
      {
        SListFaultCount = CurrentThread->SListFaultCount;
        if ( SListFaultCount > 0x400u )
        {
          CurrentThread->SListFaultCount = 0;
          goto LABEL_6;
        }
        v22 = SListFaultCount + 1;
      }
      else
      {
        CurrentThread->SListFaultAddress = v20;
        v22 = 0;
      }
      CurrentThread->SListFaultCount = v22;
      *(_QWORD *)(BugCheckParameter3 + 248) = v10;
    }
    return 1;
  }
LABEL_6:
  v11 = (unsigned int)BugCheckParameter2[6] < 2;
  v12 = 0x10000000;
  *BugCheckParameter2 = -1073741819;
  if ( v11 || (BugCheckParameter2[8] & 8) == 0 )
    goto LABEL_8;
  if ( a3 )
  {
    v12 = 0x8000000;
    goto LABEL_8;
  }
  return 0;
}
