/*
 * XREFs of PsspFreeLinkedHandleList @ 0x1800BB2B4
 * Callers:
 *     PsspCaptureThreadInformation @ 0x1800BA890 (PsspCaptureThreadInformation.c)
 * Callees:
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x180160410 (ZwFreeVirtualMemory.c)
 */

void __fastcall PsspFreeLinkedHandleList(void *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  unsigned int *v4; // rdi
  __int64 v5; // rsi
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  if ( a1 )
  {
    BaseAddress = a1;
    RegionSize = 0LL;
    v1 = a1;
    v2 = a1;
    v3 = a1;
    do
    {
      v1 = (_QWORD *)*v1;
      v4 = (unsigned int *)v3 + 3;
      if ( *((_WORD *)v2 + 5) )
      {
        v5 = *((unsigned __int16 *)v2 + 5);
        do
        {
          NtClose((HANDLE)*v4++);
          --v5;
        }
        while ( v5 );
      }
      RegionSize = 1LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      BaseAddress = v1;
      v2 = v1;
      v3 = v1;
    }
    while ( v1 );
  }
}
