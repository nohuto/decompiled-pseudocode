/*
 * XREFs of ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1401B3130
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D9158 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D91A8 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1400D930C (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z @ 0x1401B339C (-UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z.c)
 *     ?bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z @ 0x1401B3864 (-bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z.c)
 *     ?ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z @ 0x1401B39AC (-ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z.c)
 *     ?ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z @ 0x140332758 (-ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

struct _FD_GLYPHSET *__fastcall UMPDDrvQueryFontTree(struct DHPDEV__ *a1, __int64 a2, int a3, int a4, unsigned int *a5)
{
  struct _FD_GLYPHSET *v5; // rdi
  struct _FD_GLYPHSET *v6; // rsi
  UMPDOBJ *v10; // rbx
  __int64 v11; // rax
  int v12; // r14d
  unsigned __int64 v13; // r12
  char *v14; // r13
  char *KernelPtr; // rax
  char *v16; // rdx
  char *v17; // r15
  struct DHPDEV__ *v18; // r15
  unsigned int *v19; // r14
  unsigned __int64 v21; // r9
  struct _FD_GLYPHSET *FD_GLYPHSET; // rax
  __int64 v23; // r9
  size_t Size; // [rsp+20h] [rbp-B1h]
  void *v26; // [rsp+38h] [rbp-99h] BYREF
  struct DHPDEV__ *v27; // [rsp+40h] [rbp-91h]
  unsigned int *v28; // [rsp+48h] [rbp-89h]
  UMPDOBJ *v29; // [rsp+50h] [rbp-81h] BYREF
  _OWORD v30[2]; // [rsp+58h] [rbp-79h] BYREF
  _DWORD v31[4]; // [rsp+80h] [rbp-51h] BYREF
  __int64 v32; // [rsp+90h] [rbp-41h]
  struct DHPDEV__ *v33; // [rsp+98h] [rbp-39h]
  __int64 v34; // [rsp+A0h] [rbp-31h]
  int v35; // [rsp+A8h] [rbp-29h]
  int v36; // [rsp+ACh] [rbp-25h]
  void *v37; // [rsp+B0h] [rbp-21h]
  unsigned int v38; // [rsp+B8h] [rbp-19h]
  void *v39; // [rsp+C0h] [rbp-11h]

  v5 = 0LL;
  v27 = a1;
  v6 = 0LL;
  v28 = a5;
  v26 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v29);
  memset_0(v31, 0, 0x48uLL);
  v10 = v29;
  if ( !v29 )
  {
LABEL_15:
    v5 = v6;
    goto LABEL_16;
  }
  v31[1] = 27;
  LOBYTE(v31[0]) = 0;
  v11 = *(_QWORD *)v29;
  v36 = a4;
  v12 = 1;
  v32 = v11;
  v33 = v27;
  v34 = a2;
  v35 = a3;
  v37 = UMPDOBJ::_AllocUserMem(v29, 4u, 1);
  v38 = 0;
  v39 = 0LL;
  if ( v37 )
  {
    LODWORD(Size) = 8;
    v13 = 0xFFFFFFFFLL;
    if ( (unsigned int)UMPDOBJ::Thunk(v10, v31, 0x48u, &v26, Size) != -1 )
    {
      v14 = (char *)v26;
      if ( v26 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr((char **)v10, (char *)v37);
        v16 = (char *)v39;
        *a5 = *(_DWORD *)KernelPtr;
        if ( !*((_BYTE *)v10 + 456) || !v16 || !v38 )
          v12 = 0;
        v17 = UMPDOBJ::GetKernelPtr((char **)v10, v16);
        if ( a4 == 3 )
        {
          if ( (unsigned int)UMPDOBJ::bSandboxedClient(v10) && (v23 = *((_QWORD *)v10 + 53)) != 0 )
            v21 = *(_QWORD *)(v23 + 64);
          else
            v21 = 0LL;
          if ( v12 )
            LODWORD(v13) = v38;
          else
            v17 = v14;
          FD_GLYPHSET = ProbeAndReadFD_GLYPHSET((const struct _FD_GLYPHSET *)v17, v12, v13, v21);
        }
        else
        {
          if ( a4 != 2 )
          {
LABEL_9:
            v18 = v27;
            if ( (unsigned int)bIsFreeHooked(v27, v10) )
            {
              memset(v30, 0, sizeof(v30));
              if ( v6 )
                PushThreadGuardedObject(v30, v6, Win32FreePool);
              v19 = v28;
              UMPDMyDrvFree(v10, v18, v14, *v28);
              if ( v6 )
                PopThreadGuardedObject(v30);
            }
            else
            {
              v19 = v28;
            }
            *v19 = (unsigned int)v6;
            goto LABEL_15;
          }
          if ( v12 )
            v13 = v38;
          else
            v17 = v14;
          FD_GLYPHSET = (struct _FD_GLYPHSET *)ProbeAndReadFD_KERNINGPAIR((const struct _FD_KERNINGPAIR *)v17, v12, v13);
        }
        v6 = FD_GLYPHSET;
        goto LABEL_9;
      }
    }
  }
LABEL_16:
  XUMPDOBJ::~XUMPDOBJ(&v29);
  return v5;
}
