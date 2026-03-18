/*
 * XREFs of CmosConfigSpaceHandler @ 0x140028EA0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIReferenceHandleEx @ 0x140015FC0 (AMLIReferenceHandleEx.c)
 *     AMLIGetParent @ 0x1400160B8 (AMLIGetParent.c)
 *     CmosGetOpRegionType @ 0x140028FBC (CmosGetOpRegionType.c)
 *     CmosConfigSpaceHandlerWorker @ 0x140042FA4 (CmosConfigSpaceHandlerWorker.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmosConfigSpaceHandler(
        int a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 Pool2; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  int OpRegionType; // esi
  __int64 result; // rax

  Pool2 = ExAllocatePool2(64LL, 72LL, 1181770561LL);
  v13 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)Pool2 = a1;
  *(_QWORD *)(Pool2 + 8) = a2;
  AMLIReferenceHandleEx(a2);
  *(_QWORD *)(v13 + 24) = a5;
  *(_DWORD *)(v13 + 32) = a6;
  *(_QWORD *)(v13 + 40) = a7;
  *(_QWORD *)(v13 + 48) = a8;
  *(_DWORD *)(v13 + 16) = a3;
  *(_DWORD *)(v13 + 20) = a4;
  *(_QWORD *)(v13 + 56) = AMLIGetParent(v14);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 104LL) )
    return CmosConfigSpaceHandlerWorker(a2, 0LL, 0LL, v13);
  OpRegionType = CmosGetOpRegionType(a2, v15, v13);
  result = 259LL;
  if ( OpRegionType != 259 )
  {
    if ( OpRegionType < 0 )
    {
      (*(void (__fastcall **)(_QWORD))(v13 + 40))(*(_QWORD *)(v13 + 48));
      AMLIDereferenceHandleEx(*(_QWORD *)(v13 + 8));
      AMLIDereferenceHandleEx(*(_QWORD *)(v13 + 56));
      ExFreePoolWithTag((PVOID)v13, 0);
      return (unsigned int)OpRegionType;
    }
    return CmosConfigSpaceHandlerWorker(a2, 0LL, 0LL, v13);
  }
  return result;
}
