/*
 * XREFs of _lambda_27a4ba88670a0d404d45da27056d59bf_::operator() @ 0x180044798
 * Callers:
 *     ?Commit@CAudioSessionPropertyStore@@UEAAJXZ @ 0x180044C90 (-Commit@CAudioSessionPropertyStore@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValidProperty@CAudioSessionPropertyStore@@AEAA_NPEBUtagPROPVARIANT@@@Z @ 0x18001AA3C (-IsValidProperty@CAudioSessionPropertyStore@@AEAA_NPEBUtagPROPVARIANT@@@Z.c)
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001F970 (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800206A4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x180025BEC (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180031158 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x180041220 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?StringCbLengthA@@YAJPEBD_KPEA_K@Z @ 0x180045A9C (-StringCbLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     memcpy_0 @ 0x18004B3CC (memcpy_0.c)
 */

__int64 __fastcall lambda_27a4ba88670a0d404d45da27056d59bf_::operator()(__int64 a1)
{
  unsigned __int16 *v2; // r9
  __int64 v3; // rdx
  HRESULT UBound; // ebx
  __int16 v5; // cx
  SIZE_T v6; // rdi
  unsigned __int64 v7; // rdx
  LONG v8; // eax
  __int64 v9; // rax
  const char *v10; // rcx
  bool v11; // zf
  const unsigned __int16 *v12; // rcx
  char *v13; // rax
  char *v14; // rsi
  char *v15; // r14
  __int64 v16; // r9
  LONG v17; // eax
  int Element; // eax
  __int64 v19; // rdx
  char *v20; // r8
  unsigned __int64 v21; // rdx
  char *v22; // rcx
  __int64 v23; // r9
  SIZE_T **v24; // rax
  SIZE_T *v25; // rcx
  char **v26; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  LONG plUbound; // [rsp+60h] [rbp+40h] BYREF
  unsigned __int64 rgIndices; // [rsp+68h] [rbp+48h] BYREF
  char *v31; // [rsp+70h] [rbp+50h] BYREF

  if ( CAudioSessionPropertyStore::IsValidProperty(
         (CAudioSessionPropertyStore *)a1,
         **(const struct tagPROPVARIANT ***)(a1 + 8)) )
  {
    plUbound = 0;
    v5 = *v2;
    v6 = 24LL;
    if ( *v2 != 8 )
    {
      v7 = (unsigned int)*v2 - 30;
      if ( *v2 == 30 )
      {
        v10 = (const char *)*((_QWORD *)v2 + 1);
        rgIndices = 0LL;
        UBound = StringCbLengthA(v10, v7, &rgIndices);
        if ( UBound < 0 )
        {
          v3 = 757LL;
          goto LABEL_4;
        }
        if ( rgIndices > 0x400 )
        {
          UBound = -2147024882;
          v3 = 758LL;
          goto LABEL_4;
        }
        v6 = rgIndices + 25;
        goto LABEL_38;
      }
      if ( *v2 != 31 )
      {
        if ( *v2 == 65 || *v2 == 70 )
        {
          v9 = *((unsigned int *)v2 + 2);
          if ( (unsigned int)v9 > 0x400 )
          {
            UBound = -2147024882;
            v3 = 715LL;
            goto LABEL_4;
          }
          v6 = v9 + 24;
        }
        else if ( *v2 == 8196 )
        {
          if ( SafeArrayGetDim(*((SAFEARRAY **)v2 + 1)) != 1 )
          {
            v3 = 721LL;
            goto LABEL_3;
          }
          if ( SafeArrayGetElemsize(*(SAFEARRAY **)(**(_QWORD **)(a1 + 8) + 8LL)) != 4 )
          {
            v3 = 722LL;
            goto LABEL_3;
          }
          UBound = SafeArrayGetUBound(*(SAFEARRAY **)(**(_QWORD **)(a1 + 8) + 8LL), 1u, &plUbound);
          if ( UBound < 0 )
          {
            v3 = 723LL;
            goto LABEL_4;
          }
          if ( plUbound < 0 )
          {
            UBound = -2147024882;
            v3 = 724LL;
            goto LABEL_4;
          }
          v8 = plUbound + 1;
          plUbound = v8;
          if ( (unsigned int)v8 > 0x100 )
          {
            UBound = -2147024882;
            v3 = 730LL;
            goto LABEL_4;
          }
          v6 = 4LL * v8 + 24;
        }
LABEL_38:
        v13 = (char *)operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
        v31 = v13;
        v14 = v13;
        if ( !v13 )
        {
          UBound = -2147024882;
          v19 = 771LL;
          v23 = 2147942414LL;
          goto LABEL_62;
        }
        v15 = v13 + 24;
        v16 = **(_QWORD **)(a1 + 8);
        *(_OWORD *)v13 = *(_OWORD *)v16;
        *((_QWORD *)v13 + 2) = *(_QWORD *)(v16 + 16);
        if ( *(_WORD *)v16 != 8 )
        {
          if ( *(_WORD *)v16 == 30 )
          {
            Element = StringCchCopyA(v13 + 24, v6 - 24, *(const char **)(v16 + 8));
            UBound = Element;
            if ( Element < 0 )
            {
              v19 = 819LL;
LABEL_58:
              v23 = (unsigned int)Element;
LABEL_62:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v19,
                (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
                (const char *)v23);
              Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>((void **)&v31);
              return (unsigned int)UBound;
            }
LABEL_59:
            *((_QWORD *)v14 + 1) = 24LL;
LABEL_60:
            v24 = *(SIZE_T ***)(a1 + 16);
            v31 = 0LL;
            v25 = *v24;
            v26 = *(char ***)(a1 + 24);
            *v25 = v6;
            *v26 = v14;
            Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>((void **)&v31);
            return 0LL;
          }
          if ( *(_WORD *)v16 != 31 )
          {
            if ( *(_WORD *)v16 == 65 || *(_WORD *)v16 == 70 )
            {
              memcpy_0(v13 + 24, *(const void **)(v16 + 16), *(unsigned int *)(v16 + 8));
              *((_QWORD *)v14 + 2) = 24LL;
            }
            else if ( *(_WORD *)v16 == 8196 )
            {
              LODWORD(rgIndices) = 0;
              *((_QWORD *)v13 + 1) = 24LL;
              v17 = 0;
              while ( v17 < plUbound )
              {
                Element = SafeArrayGetElement(*(SAFEARRAY **)(**(_QWORD **)(a1 + 8) + 8LL), (LONG *)&rgIndices, v15);
                UBound = Element;
                if ( Element < 0 )
                {
                  v19 = 794LL;
                  goto LABEL_58;
                }
                v15 += 4;
                v17 = rgIndices + 1;
                LODWORD(rgIndices) = rgIndices + 1;
              }
            }
            goto LABEL_60;
          }
        }
        v20 = *(char **)(v16 + 8);
        v21 = v6 - 24;
        v22 = v13 + 24;
        if ( *(_WORD *)v16 == 8 )
        {
          Element = StringCbCopyW(v22, v21, v20);
          UBound = Element;
          if ( Element < 0 )
          {
            v19 = 805LL;
            goto LABEL_58;
          }
        }
        else
        {
          Element = StringCbCopyW(v22, v21, v20);
          UBound = Element;
          if ( Element < 0 )
          {
            v19 = 810LL;
            goto LABEL_58;
          }
        }
        goto LABEL_59;
      }
    }
    rgIndices = 0LL;
    v11 = v5 == 8;
    v12 = (const unsigned __int16 *)*((_QWORD *)v2 + 1);
    if ( v11 )
    {
      UBound = StringCbLengthW(v12, 0x7FFFFFFFuLL, &rgIndices);
      if ( UBound < 0 )
      {
        v3 = 741LL;
        goto LABEL_4;
      }
    }
    else
    {
      UBound = StringCbLengthW(v12, 0x7FFFFFFFuLL, &rgIndices);
      if ( UBound < 0 )
      {
        v3 = 745LL;
        goto LABEL_4;
      }
    }
    if ( rgIndices > 0x400 )
    {
      UBound = -2147024882;
      v3 = 748LL;
      goto LABEL_4;
    }
    v6 = rgIndices + 26;
    goto LABEL_38;
  }
  v3 = 706LL;
LABEL_3:
  UBound = -2147024809;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
    (const char *)(unsigned int)UBound);
  return (unsigned int)UBound;
}
