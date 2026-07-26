/*
 * XREFs of ??$MakeExtendedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x14014A91C
 * Callers:
 *     ?ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400BE004 (-ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     ??$?0$00X@?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@QEAA@PEAVInterfaceProfileKnobCollection@@@Z @ 0x140028B00 (--$-0$00X@-$unique_ptr@VInterfaceProfileKnobCollection@@U-$KFreePool@VInterfaceProfileKnobCollec.c)
 *     ??$?0$00X@?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@QEAA@$$T@Z @ 0x14009C2D8 (--$-0$00X@-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@QEAA@$$T@Z.c)
 *     ??0?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAV01@@Z @ 0x14009C618 (--0-$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U-$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAV.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

_QWORD *__fastcall MakeExtendedPoolPtr<_NDIS_PM_WOL_PATTERN>(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v6; // esi
  void *Pool2; // rax
  __int64 v8; // rbp
  void *v9; // r8
  PVOID v10; // rcx
  PVOID P; // [rsp+48h] [rbp+20h] BYREF

  if ( a4 )
    *a4 = 0;
  v6 = a3 + 196;
  if ( a3 >= 0xFFFFFF3C )
  {
    wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::unique_ptr<wchar_t,KFreePool<wchar_t>>(a1);
    return a1;
  }
  Pool2 = (void *)ExAllocatePool2(64LL, v6, 2021082190);
  v8 = (__int64)Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0xC4uLL);
    wistd::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>(
      (__int64)&P,
      v8);
  }
  else
  {
    wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::unique_ptr<wchar_t,KFreePool<wchar_t>>(&P);
  }
  if ( P )
  {
    if ( a4 )
      *a4 = v6;
    wistd::unique_ptr<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>::unique_ptr<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>(
      a1,
      (__int64 *)&P);
    v10 = P;
    if ( P )
      goto LABEL_13;
  }
  else
  {
    wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::unique_ptr<wchar_t,KFreePool<wchar_t>>(a1);
    if ( v9 )
    {
      v10 = v9;
LABEL_13:
      ExFreePoolWithTag(v10, 0);
    }
  }
  return a1;
}
