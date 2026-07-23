/*
 * XREFs of MiFreeRelocations @ 0x14093B4DC
 * Callers:
 *     MiDeleteControlArea @ 0x14043F354 (MiDeleteControlArea.c)
 *     MiRelocateImage @ 0x140AEA57C (MiRelocateImage.c)
 * Callees:
 *     MiFreeImageLoadConfig @ 0x14093B594 (MiFreeImageLoadConfig.c)
 *     MiReturnImageBase @ 0x1409D83E0 (MiReturnImageBase.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRelocations(_DWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  unsigned int v7; // ecx
  bool v8; // zf
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    v10 = 0LL;
    v2 = (unsigned int)a1[22];
    v9 = 0LL;
    if ( v2 != 0xFFFFFFFFLL )
    {
      v7 = a1[23];
      *(_QWORD *)&v9 = v2;
      DWORD2(v9) = (unsigned __int16)v7;
      v8 = (a1[14] & 0x20000000) == 0;
      LODWORD(v10) = (v7 >> 20) & 3;
      if ( v8 )
      {
        BYTE12(v9) = 0;
      }
      else
      {
        BYTE12(v9) = 1;
        BYTE13(v9) = BYTE2(v7) & 1;
      }
      MiReturnImageBase(&v9, a2);
      a1[22] = -1;
    }
    MiFreeImageLoadConfig(a2 + 9);
    v5 = (_QWORD *)a2[2];
    if ( v5 )
    {
      do
      {
        v6 = (_QWORD *)*v5;
        ExFreePoolWithTag(v5, 0);
        v5 = v6;
      }
      while ( v6 );
    }
    ExFreePoolWithTag(a2, 0);
  }
}
