/*
 * XREFs of MiInitializeFixupVad @ 0x1409D7B68
 * Callers:
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiInitializePrivateFixupBitmap @ 0x1409D7C08 (MiInitializePrivateFixupBitmap.c)
 */

unsigned __int64 __fastcall MiInitializeFixupVad(__int64 a1, unsigned int a2, int a3)
{
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 result; // rax

  v5 = **(_QWORD ***)(a1 + 72);
  if ( a3 )
  {
    v6 = *(_QWORD *)((v5[12] & 0xFFFFFFFFFFFFFFF8uLL) + 32);
    v7 = -(*(_QWORD *)(v6 + 40) + *(_QWORD *)(v6 + 48));
  }
  else
  {
    v7 = ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12)
       - *(_QWORD *)(*v5 + 32LL);
  }
  v8 = *(_QWORD *)(a1 + 80) - v5[17];
  *(_DWORD *)(a1 + 136) = a2;
  *(_QWORD *)(a1 + 144) = v7 - (v8 >> 3 << 12);
  v9 = MiInitializePrivateFixupBitmap(a1 + 152, v5, a2);
  *(_DWORD *)(a1 + 52) = v9;
  result = HIDWORD(v9);
  *(_BYTE *)(a1 + 34) = result;
  *(_DWORD *)(a1 + 48) |= 0x400000u;
  return result;
}
