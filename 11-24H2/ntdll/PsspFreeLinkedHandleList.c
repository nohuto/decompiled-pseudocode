/*
 * XREFs of PsspFreeLinkedHandleList @ 0x1800C36F4
 * Callers:
 *     PsspCaptureThreadInformation @ 0x1800C2CCC (PsspCaptureThreadInformation.c)
 * Callees:
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 */

void __fastcall PsspFreeLinkedHandleList(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  unsigned int *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+48h] [rbp+10h] BYREF

  if ( a1 )
  {
    v7 = a1;
    v6 = 0LL;
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
      v6 = 1LL;
      ZwFreeVirtualMemory(-1LL, &v7, &v6, 0x8000LL);
      v7 = v1;
      v2 = v1;
      v3 = v1;
    }
    while ( v1 );
  }
}
