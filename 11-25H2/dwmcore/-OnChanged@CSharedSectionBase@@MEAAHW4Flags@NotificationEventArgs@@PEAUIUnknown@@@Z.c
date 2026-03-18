/*
 * XREFs of ?OnChanged@CSharedSectionBase@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18003E9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ @ 0x18003EA38 (-UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ.c)
 */

__int64 __fastcall CSharedSectionBase::OnChanged(__int64 a1)
{
  LPVOID v2; // rdi
  void *v3; // rcx
  __int64 v4; // rax
  __int64 result; // rax

  v2 = 0LL;
  v3 = *(void **)(a1 + 72);
  if ( v3 )
    v2 = MapViewOfFile(v3, 4u, 0, 0, *(unsigned int *)(a1 + 80));
  CSharedSectionBase::UnmapSharedMemory((CSharedSectionBase *)a1);
  v4 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 96) = v4;
  result = 0LL;
  *(_QWORD *)(a1 + 88) = v2;
  return result;
}
