/*
 * XREFs of TopologyPUPrologic @ 0x140031580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TopologyPUPrologic(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  NTSTATUS v7; // edi
  __int64 v8; // r14
  __int64 Pool2; // rax
  __int64 v10; // r8
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  _DWORD *v13; // r14
  _DWORD *v14; // rax

  v3 = *(unsigned int *)(a2 + 80);
  *(_DWORD *)(a3 + 76) = 17;
  *(_QWORD *)(a3 + 8) = &KSNODETYPE_PROLOGIC_DECODER;
  *(_QWORD *)(a3 + 16) = &KSNODETYPE_PROLOGIC_DECODER;
  if ( (_DWORD)v3 )
  {
    v8 = v3;
    Pool2 = ExAllocatePool2(64LL, 4 * v3 + 40, 1096972357LL);
    v11 = (_QWORD *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *(_QWORD *)(a3 + 128) = Pool2;
    *(_DWORD *)Pool2 = 3;
    *(_DWORD *)(Pool2 + 8) = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 4LL);
    *(_DWORD *)(Pool2 + 12) = *(_DWORD *)(a2 + 24);
    *(_QWORD *)(Pool2 + 32) = Pool2 + 40;
    *(_DWORD *)(Pool2 + 20) = v3;
    v12 = 0LL;
    do
    {
      *(_DWORD *)(v12 + *(_QWORD *)(Pool2 + 32)) = *(_DWORD *)(v12 + *(_QWORD *)(a2 + 88));
      v12 += 4LL;
      --v8;
    }
    while ( v8 );
    v13 = (_DWORD *)(Pool2 + 24);
    if ( (*(_DWORD *)(a2 + 76) & 2) != 0 )
    {
      *v13 = 0;
      LOBYTE(v10) = -127;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a3 + 136))(a1, a3, v10);
      if ( v7 < 0 )
        goto LABEL_13;
      v14 = (_DWORD *)(v11[4] + 4LL * (unsigned int)*v13);
    }
    else
    {
      v14 = *(_DWORD **)(Pool2 + 32);
      *v13 = 1;
    }
    *(_DWORD *)(a3 + 88) = *v14;
    v7 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v11, ExFreePool);
    if ( v7 >= 0 )
      return (unsigned int)v7;
LABEL_13:
    ExFreePool(v11);
    return (unsigned int)v7;
  }
  return (unsigned int)-1073741438;
}
