/*
 * XREFs of PsspCaptureVaSpaceInformation2 @ 0x1800CA11C
 * Callers:
 *     PsspCaptureVaSpaceInformation @ 0x1800CA018 (PsspCaptureVaSpaceInformation.c)
 * Callees:
 *     PsspCaptureImageInformation @ 0x1800CA6BC (PsspCaptureImageInformation.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall PsspCaptureVaSpaceInformation2(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        __int64 a4,
        __int16 a5)
{
  int (__fastcall *v5)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  unsigned __int64 v6; // rdi
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  unsigned __int64 v9; // rbx
  char v10; // r13
  int v11; // esi
  __int64 v12; // r12
  unsigned __int64 v13; // rcx
  int v14; // edx
  unsigned __int64 v15; // rcx
  NTSTATUS result; // eax
  int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // edx
  NTSTATUS v20; // edi
  unsigned int v21; // esi
  __int64 v22; // r14
  _OWORD *v23; // rdi
  unsigned int v24; // r15d
  unsigned int v25; // ecx
  _WORD *v26; // r12
  size_t v27; // r8
  unsigned __int16 v28; // r14
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned __int16 *v31; // rsi
  __int64 v32; // rcx
  __int16 v33; // ax
  int v34; // eax
  __int64 v35; // [rsp+58h] [rbp-71h] BYREF
  int v36; // [rsp+60h] [rbp-69h]
  int v37; // [rsp+64h] [rbp-65h]
  unsigned int v38; // [rsp+68h] [rbp-61h]
  PVOID BaseAddress; // [rsp+70h] [rbp-59h] BYREF
  HANDLE SectionHandle; // [rsp+78h] [rbp-51h] BYREF
  __int128 v41; // [rsp+80h] [rbp-49h] BYREF
  __int128 v42; // [rsp+90h] [rbp-39h]
  __int128 v43; // [rsp+A0h] [rbp-29h]
  ULONG_PTR ViewSize; // [rsp+B0h] [rbp-19h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+B8h] [rbp-11h] BYREF
  _OWORD v46[5]; // [rsp+C0h] [rbp-9h] BYREF

  v5 = (int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a3;
  v35 = 0LL;
  v6 = 0LL;
  SectionHandle = 0LL;
  v7 = 0;
  MaximumSize.QuadPart = 0LL;
  v8 = 0;
  BaseAddress = 0LL;
  LODWORD(v9) = 0;
  ViewSize = 0LL;
  v10 = 0;
  v11 = a5 & 0x1000;
  v12 = a4;
  v46[0] = 0LL;
  while ( 1 )
  {
    v37 = v11;
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    if ( v5(v12, v6, 0LL, &v41, 48LL, 0LL) < 0 )
      break;
    v13 = v41;
    if ( (_QWORD)v41 != v6 )
      return -1073741503;
    if ( DWORD2(v43) == 0x1000000 || (v14 = 0, DWORD2(v43) == 0x40000) )
      v14 = 1;
    v8 += v14;
    v11 = a5 & 0x1000;
    if ( (a5 & 0x1000) != 0 && !v10 && (DWORD2(v43) == 0x1000000 || DWORD2(v43) == 0x40000) )
    {
      v35 = 0LL;
      v46[0] = 0LL;
      v17 = a3(v12, v6, 2LL, v46, 16LL, &v35);
      if ( v17 >= 0 || v17 == -2147483643 || v17 == -1073741820 || v17 == -1073741789 )
      {
        v18 = v35;
        if ( HIDWORD(v35) )
        {
          v18 = 0;
          v35 = 0LL;
        }
      }
      else
      {
        v18 = v35;
      }
      if ( v18 > 0x10 && (v17 >= 0 || v17 == -2147483643 || v17 == -1073741820 || v17 == -1073741789) )
        v19 = (v18 - 5) & 0xFFFFFFF8;
      else
        v19 = 8;
      v13 = v41;
      if ( v19 + (unsigned int)v9 < (unsigned int)v9 )
      {
        LODWORD(v9) = -1;
        v10 = 1;
      }
      else
      {
        LODWORD(v9) = v19 + v9;
      }
    }
    ++v7;
    v6 = v13 + *((_QWORD *)&v42 + 1);
    if ( v13 + *((_QWORD *)&v42 + 1) < v13 )
    {
      v11 = v37;
      break;
    }
    v5 = (int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a3;
  }
  v15 = 72LL * v7;
  if ( v15 > 0xFFFFFFFF )
    return -1073741675;
  if ( v10 )
  {
    v9 = 8LL * v8;
    if ( v9 > 0xFFFFFFFF )
      return -1073741675;
  }
  else if ( v11 )
  {
    if ( (int)v9 + 16 < (unsigned int)v9 )
      return -1073741675;
    LODWORD(v9) = v9 + 16;
  }
  if ( (_DWORD)v9 )
  {
    if ( (int)v9 + (int)v15 < (unsigned int)v15 )
      return -1073741675;
    LODWORD(v15) = v9 + v15;
  }
  MaximumSize.QuadPart = (unsigned int)v15;
  result = NtCreateSection(
             &SectionHandle,
             0xF0007u,
             (POBJECT_ATTRIBUTES)&stru_180180980,
             &MaximumSize,
             4u,
             0x8000000u,
             0LL);
  if ( result >= 0 )
  {
    BaseAddress = 0LL;
    ViewSize = 0LL;
    v20 = ZwMapViewOfSection(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &BaseAddress,
            0LL,
            0LL,
            0LL,
            &ViewSize,
            ViewShare,
            0,
            4u);
    if ( v20 < 0 )
    {
      NtClose(SectionHandle);
      return v20;
    }
    v21 = ViewSize;
    v22 = 0LL;
    v23 = BaseAddress;
    v24 = 0;
    v38 = ViewSize;
    v36 = 0;
    while ( 1 )
    {
      if ( v24 + 72 < v24
        || v24 + 72 > v21
        || (v41 = 0LL, v42 = 0LL, v43 = 0LL, (int)a3(v12, v22, 0LL, &v41, 48LL, 0LL) < 0) )
      {
LABEL_20:
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
        *(_DWORD *)(a1 + 912) = v36;
        *(_QWORD *)(a1 + 920) = SectionHandle;
        *(_DWORD *)(a1 + 916) = v24;
        *(_QWORD *)(a1 + 928) = MEMORY[0x7FFE0014];
        return 0;
      }
      if ( (_QWORD)v41 != v22 )
        return -1073741503;
      memset_thunk_772440563353939046(v23, 0, 0x48uLL);
      v25 = 72;
      *v23 = v41;
      *((_DWORD *)v23 + 4) = v42;
      *((_QWORD *)v23 + 3) = *((_QWORD *)&v42 + 1);
      *((_QWORD *)v23 + 4) = v43;
      *((_DWORD *)v23 + 10) = DWORD2(v43);
      if ( v37 )
      {
        if ( DWORD2(v43) == 0x1000000 )
        {
          PsspCaptureImageInformation(v23 + 3, a2, *((_QWORD *)&v41 + 1));
LABEL_55:
          if ( v24 + 76 < v24 || v24 + 76 > v21 )
            goto LABEL_20;
          if ( v10 )
          {
LABEL_58:
            v26 = (_WORD *)v23 + 36;
            goto LABEL_59;
          }
          v29 = v24 + 92;
          if ( v24 + 92 < v24 + 76 || v29 > v21 )
          {
            v10 = 1;
            goto LABEL_58;
          }
          v26 = (_WORD *)v23 + 36;
          v30 = v38 - v29;
          *((_WORD *)v23 + 36) = 0;
          v31 = (unsigned __int16 *)v23 + 36;
          if ( v30 >= (unsigned int)v9 )
            v30 = v9;
          v32 = v30;
          v33 = -1;
          if ( (unsigned int)v32 < 0xFFFF )
            v33 = v32;
          *((_WORD *)v23 + 37) = v33;
          *((_QWORD *)v23 + 10) = (char *)v23 + 88;
          v35 = 0LL;
          v34 = a3(a4, v22, 2LL, (char *)v23 + 72, v32, &v35);
          if ( (v34 >= 0 || v34 == -1073741789 || v34 == -1073741820 || v34 == -2147483643) && HIDWORD(v35) )
          {
            v31 = 0LL;
            v34 = -1073741675;
          }
          v10 = 0;
          if ( v34 < 0 )
          {
LABEL_59:
            *v26 = 0;
            LODWORD(v9) = v9 - 2;
            v25 = 80;
          }
          else
          {
            v27 = *v31;
            if ( v27 + 2 > 0xFFFF )
            {
              v28 = 0;
            }
            else
            {
              v28 = v27 + 2;
              memmove(v31 + 1, *((const void **)v31 + 1), v27);
              *(unsigned __int16 *)((char *)v31 + *v31 + 2) = 0;
            }
            *v31 = v28;
            v10 = 0;
            LODWORD(v9) = v9 - ((v28 + 9) & 0xFFFFFFF8);
            v25 = (v28 + 81) & 0xFFFFFFF8;
          }
          v12 = a4;
          goto LABEL_65;
        }
        if ( DWORD2(v43) == 0x40000 )
          goto LABEL_55;
      }
LABEL_65:
      v24 += v25;
      v22 = v41 + *((_QWORD *)&v42 + 1);
      ++v36;
      v23 = (_OWORD *)((char *)v23 + v25);
      if ( (_QWORD)v41 + *((_QWORD *)&v42 + 1) < (unsigned __int64)v41 )
        goto LABEL_20;
      v21 = v38;
    }
  }
  return result;
}
