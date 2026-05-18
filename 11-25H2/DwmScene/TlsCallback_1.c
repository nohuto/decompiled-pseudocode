/*
 * XREFs of TlsCallback_1 @ 0x18000CA70
 * Callers:
 *     <none>
 * Callees:
 *     _o__free_base @ 0x18000BF36 (_o__free_base.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 (*__fastcall TlsCallback_1(__int64 a1, int a2))(void)
{
  __int64 (*result)(void); // rax
  __int64 v3; // r14
  __int64 v4; // rdi
  int v5; // ebx
  __int64 (**v6)(void); // rsi
  __int64 v7; // rbx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64 (*)(void))&retaddr;
  if ( a2 == 3 || !a2 )
  {
    result = (__int64 (*)(void))NtCurrentTeb()->ThreadLocalStoragePointer;
    v3 = *((_QWORD *)result + (unsigned int)TlsIndex);
    v4 = *(_QWORD *)(v3 + 32);
    if ( v4 )
    {
      while ( 1 )
      {
        v5 = *(_DWORD *)v4 - 1;
        if ( v5 >= 0 )
        {
          v6 = (__int64 (**)(void))(v4 + 8 * (v5 + 2LL));
          do
          {
            result = *v6;
            if ( *v6 )
              result = (__int64 (*)(void))result();
            --v6;
            --v5;
          }
          while ( v5 >= 0 );
        }
        v7 = *(_QWORD *)(v4 + 8);
        if ( !v7 )
          break;
        result = (__int64 (*)(void))o__free_base();
        *(_QWORD *)(v3 + 32) = v7;
        v4 = v7;
      }
      *(_QWORD *)(v3 + 32) = 0LL;
    }
  }
  return result;
}
