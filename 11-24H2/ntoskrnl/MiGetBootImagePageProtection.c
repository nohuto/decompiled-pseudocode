/*
 * XREFs of MiGetBootImagePageProtection @ 0x140C5CF50
 * Callers:
 *     MiHandleBootImage @ 0x140C5D020 (MiHandleBootImage.c)
 * Callees:
 *     MiComputeDriverProtection @ 0x140A8D51C (MiComputeDriverProtection.c)
 */

__int64 __fastcall MiGetBootImagePageProtection(unsigned int a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r11d
  __int64 v5; // r10
  _DWORD *v6; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // r9
  __int64 result; // rax

  v4 = a1;
  v5 = 0LL;
  v6 = (_DWORD *)*a4;
  if ( !*a4 )
    goto LABEL_7;
  v9 = v6[3];
  if ( v4 < v9 )
    goto LABEL_7;
  v10 = v6[4];
  if ( v10 < v6[2] )
    v10 = v6[2];
  if ( v4 < v9 + v10 )
  {
    v11 = MiComputeDriverProtection(v6[9]);
  }
  else
  {
LABEL_7:
    v12 = a2 + *(unsigned __int16 *)(a2 + 20) + 24LL;
    v13 = v12 + 40LL * *(unsigned __int16 *)(a2 + 6);
    v11 = 1;
    while ( v12 < v13 )
    {
      if ( v4 < *(_DWORD *)(v12 + 12) )
        goto LABEL_12;
      v14 = MiComputeDriverProtection(*(_DWORD *)(v12 + 36));
      v5 = v15;
      v11 = v14;
      v12 = v15 + 40;
    }
    v5 = 0LL;
    v11 = (*(_DWORD *)(a3 + 16) >> 5) & 0x1F;
  }
LABEL_12:
  if ( (MiFlags & 0x8000) != 0 && (v11 & 6) == 6 )
    v11 = 3;
  result = v11;
  *a4 = v5;
  return result;
}
