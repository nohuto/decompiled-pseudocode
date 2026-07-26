/*
 * XREFs of ??$MakeExtendedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U?$KFreePool@U_NDIS_PM_PACKET_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x14013F984
 * Callers:
 *     ?ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B64B0 (-ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     ??$?0$00X@?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@QEAA@PEAVInterfaceProfileKnobCollection@@@Z @ 0x14002C200 (--$-0$00X@-$unique_ptr@VInterfaceProfileKnobCollection@@U-$KFreePool@VInterfaceProfileKnobCollec.c)
 *     ??$?0$00X@?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@QEAA@$$T@Z @ 0x140090F64 (--$-0$00X@-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@QEAA@$$T@Z.c)
 *     ??0?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAV01@@Z @ 0x1400912A8 (--0-$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U-$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAV.c)
 */

_QWORD *__fastcall MakeExtendedPoolPtr<_NDIS_PM_PACKET_PATTERN>(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v6; // esi
  __int64 Pool2; // rax
  void *v8; // r8
  PVOID v9; // rcx
  PVOID P; // [rsp+48h] [rbp+20h] BYREF

  if ( a4 )
    *a4 = 0;
  v6 = a3 + 24;
  if ( a3 >= 0xFFFFFFE8 )
  {
    wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::unique_ptr<wchar_t,KFreePool<wchar_t>>(a1);
    return a1;
  }
  Pool2 = ExAllocatePool2(64LL, v6, 2021082190LL);
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    wistd::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>(
      &P,
      Pool2);
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
    v9 = P;
    if ( P )
      goto LABEL_13;
  }
  else
  {
    wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::unique_ptr<wchar_t,KFreePool<wchar_t>>(a1);
    if ( v8 )
    {
      v9 = v8;
LABEL_13:
      ExFreePoolWithTag(v9, 0);
    }
  }
  return a1;
}
