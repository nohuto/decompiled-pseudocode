/*
 * XREFs of HalpIvtpInitializeReservedDomain @ 0x140B55448
 * Callers:
 *     IvtInitializeReservedDomains @ 0x140B55618 (IvtInitializeReservedDomains.c)
 * Callees:
 *     IvtUpdateTranslationStructures @ 0x1404F59EC (IvtUpdateTranslationStructures.c)
 *     IvtAllocateTranslationStructures @ 0x14056AD68 (IvtAllocateTranslationStructures.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpIvtpInitializeReservedDomain(__int64 a1, int *a2)
{
  _QWORD *v2; // rdi
  int TranslationStructures; // ebx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rcx
  int v11; // [rsp+20h] [rbp-98h]
  _DWORD v12[10]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v13; // [rsp+68h] [rbp-50h]
  int v14; // [rsp+70h] [rbp-48h]

  v2 = (_QWORD *)*((_QWORD *)a2 + 1);
  if ( *(_DWORD *)*v2 == 1 )
  {
    if ( *(unsigned __int16 *)(*v2 + 8LL) == *(_DWORD *)(a1 + 252) )
    {
      memset_0(v12, 0, 0x70uLL);
      v14 = *a2;
      v6 = v2[2];
      v7 = v2[3];
      v12[0] = 1;
      v12[1] = 2;
      v13 = v6;
      TranslationStructures = IvtAllocateTranslationStructures(a1, v7, v12);
      if ( TranslationStructures >= 0 )
      {
        if ( *(_BYTE *)(a1 + 320) )
        {
          v9 = *(_QWORD *)(v7 + 72);
          *(_QWORD *)(v7 + 72) = 0LL;
          *(_QWORD *)(v7 + 64) = v9;
        }
        IvtUpdateTranslationStructures(a1, v7, v8, 4LL, v11, (__int64)v12, 1);
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)TranslationStructures;
}
