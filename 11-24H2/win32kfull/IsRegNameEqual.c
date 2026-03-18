/*
 * XREFs of IsRegNameEqual @ 0x14021E398
 * Callers:
 *     bNotIsKeySymbolicLink @ 0x140224400 (bNotIsKeySymbolicLink.c)
 * Callees:
 *     PALLOCMEM @ 0x1400FEC9C (PALLOCMEM.c)
 */

__int64 __fastcall IsRegNameEqual(HANDLE KeyHandle, HANDLE a2, _DWORD *a3)
{
  int v3; // ebx
  ULONG v7; // edx
  unsigned int v8; // ecx
  char *v9; // rax
  unsigned int *v10; // rsi
  char *v11; // r14
  NTSTATUS v12; // edi
  unsigned __int16 *v13; // rax
  signed __int64 v14; // r14
  int v15; // edx
  int v16; // ecx
  ULONG Length; // [rsp+70h] [rbp+40h] BYREF
  ULONG ResultLength; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  *a3 = 0;
  Length = 0;
  ResultLength = 0;
  ZwQueryKey(KeyHandle, KeyNameInformation, 0LL, 0, &Length);
  ZwQueryKey(a2, KeyNameInformation, 0LL, 0, &ResultLength);
  if ( Length + 2 >= Length
    && (v7 = ResultLength + 2, ResultLength + 2 >= ResultLength)
    && (ResultLength += 2, Length + 5 >= Length + 2)
    && (v8 = (Length + 5) & 0xFFFFFFFC, Length = v8, v8 + v7 >= v8)
    && (v9 = (char *)PALLOCMEM(v7 + v8, 1718382187LL), (v10 = (unsigned int *)v9) != 0LL) )
  {
    v11 = &v9[Length];
    v12 = ZwQueryKey(KeyHandle, KeyNameInformation, v9, Length, &Length);
    if ( v12 >= 0 )
    {
      *((_WORD *)v10 + ((unsigned __int64)*v10 >> 1) + 2) = 0;
      v12 = ZwQueryKey(a2, KeyNameInformation, v11, ResultLength, &ResultLength);
      if ( v12 >= 0 )
      {
        *(_WORD *)&v11[2 * ((unsigned __int64)*(unsigned int *)v11 >> 1) + 4] = 0;
        v13 = (unsigned __int16 *)(v10 + 1);
        v14 = v11 - (char *)v10;
        do
        {
          v15 = *(unsigned __int16 *)((char *)v13 + v14);
          v16 = *v13 - v15;
          if ( v16 )
            break;
          ++v13;
        }
        while ( v15 );
        LOBYTE(v3) = v16 == 0;
        *a3 = v3;
      }
    }
    Win32FreePool(v10);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v12;
}
