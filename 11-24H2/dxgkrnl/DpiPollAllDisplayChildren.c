/*
 * XREFs of DpiPollAllDisplayChildren @ 0x140237764
 * Callers:
 *     DpiAcpiHandleAcpiEvent @ 0x140428EBC (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     DpiFdoIsPostDevice @ 0x14004D4F0 (DpiFdoIsPostDevice.c)
 *     DpiPollDisplayChildren @ 0x1403BE03C (DpiPollDisplayChildren.c)
 */

void __fastcall DpiPollAllDisplayChildren(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // si
  __int64 v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // r8
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rdi
  __int64 v11; // rcx

  v2 = qword_140160D48;
  v3 = 0;
  v5 = qword_140160D48;
  if ( *(_QWORD *)v5 != v5 )
  {
    do
    {
      if ( v3 )
        break;
      KeWaitForSingleObject((PVOID)(v5 + 72), Executive, 0, 0, 0LL);
      v6 = *(_QWORD **)(v5 + 56);
      v7 = v6;
      v8 = (_QWORD *)*v6;
      if ( (_QWORD *)*v6 != v6 )
      {
        while ( *((_DWORD *)v6 + 4) != 1953656900
             || *((_DWORD *)v6 + 5) != 2
             || !*((_DWORD *)v6 + 677)
             || !DpiFdoIsPostDevice(v6[3]) )
        {
          v6 = v8;
          v8 = (_QWORD *)*v8;
          if ( v8 == v7 )
            goto LABEL_11;
        }
        DpiPollDisplayChildren(v9, 6LL, a2);
        v3 = 1;
      }
LABEL_11:
      KeReleaseMutex((PRKMUTEX)(v5 + 72), 0);
      v5 = *(_QWORD *)v5;
      v2 = qword_140160D48;
    }
    while ( *(_QWORD *)v5 != qword_140160D48 );
    if ( *(_QWORD *)v2 != v2 )
    {
      do
      {
        KeWaitForSingleObject((PVOID)(v2 + 72), Executive, 0, 0, 0LL);
        v10 = *(__int64 **)(v2 + 56);
        if ( (__int64 *)*v10 != v10 )
        {
          do
          {
            if ( *((_DWORD *)v10 + 4) == 1953656900
              && *((_DWORD *)v10 + 5) == 2
              && *((_DWORD *)v10 + 677)
              && !DpiFdoIsPostDevice(v10[3]) )
            {
              DpiPollDisplayChildren(v11, 6LL, a2);
            }
            v10 = (__int64 *)*v10;
          }
          while ( *v10 != *(_QWORD *)(v2 + 56) );
        }
        KeReleaseMutex((PRKMUTEX)(v2 + 72), 0);
        v2 = *(_QWORD *)v2;
      }
      while ( *(_QWORD *)v2 != qword_140160D48 );
    }
  }
}
