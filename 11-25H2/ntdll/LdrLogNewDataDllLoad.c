/*
 * XREFs of LdrLogNewDataDllLoad @ 0x18006EC90
 * Callers:
 *     LdrAddLoadAsDataTable @ 0x18001FDF0 (LdrAddLoadAsDataTable.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogNewDllLoadInternal @ 0x18006EE20 (LdrpLogNewDllLoadInternal.c)
 */

unsigned int *__fastcall LdrLogNewDataDllLoad(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  _DWORD *SharedData; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdi
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned int *result; // rax

  v4 = 2147353476LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v6 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v6 = 2147353476LL;
  v7 = 2147353477LL;
  if ( *(_BYTE *)v6 )
  {
    v8 = NtCurrentPeb()->SharedData;
    if ( v8 && *v8 )
      v9 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v9 = 2147353477LL;
    if ( (*(_BYTE *)v9 & 0x10) != 0 )
      goto LABEL_7;
  }
  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v4 = *((_QWORD *)result + 18) + 554LL;
  }
  if ( *(_BYTE *)v4 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 4) != 0 )
    {
      result = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (unsigned int *)NtCurrentPeb();
        v7 = *((_QWORD *)result + 18) + 555LL;
      }
      if ( (*(_BYTE *)v7 & 0x20) != 0 )
      {
LABEL_7:
        v10 = -1LL;
        do
          ++v10;
        while ( *(_WORD *)(a2 + 2 * v10) );
        v11 = (unsigned int)(2 * v10);
        v12 = 0xFFFFFFFFLL;
        if ( (a1 & 2) != 0 )
        {
          v12 = 5LL;
        }
        else if ( (a1 & 1) != 0 )
        {
          v12 = 6LL;
        }
        return (unsigned int *)LdrpLogNewDllLoadInternal(a1, 0LL, v12, v11, a2);
      }
    }
  }
  return result;
}
