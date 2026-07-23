/*
 * XREFs of KiLockExtendedServiceTable @ 0x140505B38
 * Callers:
 *     KiLockServiceTable @ 0x1406964A8 (KiLockServiceTable.c)
 * Callees:
 *     RtlCaptureImageExceptionValues @ 0x1402EEB24 (RtlCaptureImageExceptionValues.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1402EEF90 (RtlSectionTableFromVirtualAddress.c)
 *     RtlpConvertFunctionEntry @ 0x140406840 (RtlpConvertFunctionEntry.c)
 *     RtlImageNtHeader @ 0x140432E80 (RtlImageNtHeader.c)
 *     KiSwInterruptPresent @ 0x140BE0BD4 (KiSwInterruptPresent.c)
 */

void __fastcall KiLockExtendedServiceTable(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rsi
  PIMAGE_NT_HEADERS v5; // r15
  _IMAGE_SECTION_HEADER *v6; // r12
  char *v7; // r8
  _IMAGE_SECTION_HEADER *v8; // rbx
  char *v9; // rdi
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v13; // ebx
  _QWORD *v14; // rdi
  PIMAGE_SECTION_HEADER v15; // rax
  char v16; // r11
  unsigned __int64 v17; // rcx
  _QWORD *v18; // r9
  const char *v19; // rax
  unsigned __int64 v20; // r8
  unsigned int i; // r14d
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // ebx
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  unsigned int *v29; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-38h]
  unsigned __int64 v32; // [rsp+50h] [rbp-30h]
  unsigned __int64 *v33; // [rsp+58h] [rbp-28h]
  ULONG v34; // [rsp+C8h] [rbp+48h] BYREF

  if ( !a4 )
  {
    v4 = (unsigned __int64)&qword_140E0F2C0;
    v5 = RtlImageNtHeader((PVOID)0x140000000LL);
    v6 = 0LL;
    v7 = (char *)v5 + v5->FileHeader.SizeOfOptionalHeader;
    v8 = (_IMAGE_SECTION_HEADER *)(v7 + 24);
    v9 = &v7[32 * v5->FileHeader.NumberOfSections + 24 + 8 * v5->FileHeader.NumberOfSections];
    if ( (int)KiSwInterruptPresent() >= 0 )
    {
      while ( v8 != (_IMAGE_SECTION_HEADER *)v9 )
      {
        if ( *(_DWORD *)v8->Name == 1346589515 && !*(_DWORD *)&v8->Name[4] )
        {
          v6 = v8;
          break;
        }
        ++v8;
      }
    }
    RtlImageNtHeader((PVOID)0x140000000LL);
    RtlCaptureImageExceptionValues((void *)0x140000000LL, &v30, &v34);
    v10 = v30;
    v31 = 0x140000000uLL;
    v34 /= 0xCu;
    v32 = v30 + 12LL * v34;
    v33 = (unsigned __int64 *)&v29;
    while ( v10 && v10 != v32 )
    {
      v11 = RtlpConvertFunctionEntry(v10, v31);
      *v33 = v11;
      v10 = v30 + 12;
      v30 += 12LL;
      v12 = *v29;
      v13 = v29[1] - v12;
      v14 = (_QWORD *)(0x140000000LL + v12);
      if ( v6 )
      {
        v15 = RtlSectionTableFromVirtualAddress(v5, (PVOID)0x140000000LL, v12);
        v10 = v30;
        if ( v15 == v6 )
          continue;
      }
      v16 = (unsigned __int64)&qword_140E0F2C0 & 0x3F;
      v17 = (unsigned __int64)v14 + v13;
      v18 = v14;
      v19 = (const char *)v14;
      if ( (unsigned __int64)v14 < v17 )
      {
        do
        {
          _mm_prefetch(v19, 0);
          v19 += 64;
        }
        while ( (unsigned __int64)v19 < v17 );
      }
      v20 = v4;
      for ( i = v13 >> 7; i; --i )
      {
        v22 = 8LL;
        do
        {
          v23 = v18[1] ^ __ROL8__(*v18 ^ v20, v16);
          v18 += 2;
          v20 = __ROL8__(v23, v16);
          --v22;
        }
        while ( v22 );
        v24 = __ROL8__(v4 ^ ((char *)v18 - (char *)v14), 17);
        LOBYTE(v24) = v16 ^ (((v24 ^ v4 ^ ((char *)v18 - (char *)v14)) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v24 ^ v4 ^ ((_BYTE)v18 - (_BYTE)v14);
        v16 = 1;
        v25 = v24 & 0x3F;
        if ( v25 )
          v16 = v25;
      }
      v26 = v13 & 0x7F;
      if ( v26 >= 8 )
      {
        v27 = (unsigned __int64)v26 >> 3;
        do
        {
          v20 = __ROL8__(*v18++ ^ v20, v16);
          v26 -= 8;
          --v27;
        }
        while ( v27 );
      }
      for ( ; v26; --v26 )
      {
        v28 = *(unsigned __int8 *)v18;
        v18 = (_QWORD *)((char *)v18 + 1);
        v20 = __ROL8__(v28 ^ v20, v16);
      }
      v4 = v20;
    }
    qword_140E0F2C0 = v4;
  }
}
