/*
 * XREFs of ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1401B3420
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D9158 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D91A8 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z @ 0x1401B339C (-UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z.c)
 *     ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1401B35E0 (-ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z.c)
 *     ?bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z @ 0x1401B3864 (-bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

struct _IFIMETRICS *__fastcall UMPDDrvQueryFont(struct DHPDEV__ *a1, __int64 a2, int a3, unsigned int *a4)
{
  struct _IFIMETRICS *IFIMETRICS; // rsi
  struct UMPDOBJ *v9; // rbx
  char *v10; // rax
  char *KernelPtr; // rax
  char *v12; // rdi
  char v13; // si
  char *v14; // rax
  unsigned __int64 v15; // r8
  size_t Size; // [rsp+20h] [rbp-79h]
  void *v18; // [rsp+30h] [rbp-69h] BYREF
  struct UMPDOBJ *v19; // [rsp+38h] [rbp-61h] BYREF
  _OWORD v20[2]; // [rsp+40h] [rbp-59h] BYREF
  _DWORD v21[4]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v22; // [rsp+70h] [rbp-29h]
  struct DHPDEV__ *v23; // [rsp+78h] [rbp-21h]
  __int64 v24; // [rsp+80h] [rbp-19h]
  int v25; // [rsp+88h] [rbp-11h]
  void *v26; // [rsp+90h] [rbp-9h]
  unsigned __int64 v27; // [rsp+98h] [rbp-1h]
  void *v28; // [rsp+A0h] [rbp+7h]

  v18 = 0LL;
  IFIMETRICS = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v19);
  memset_0(v21, 0, 0x48uLL);
  v9 = v19;
  if ( !v19 )
    goto LABEL_11;
  v21[1] = 26;
  LOBYTE(v21[0]) = 0;
  v22 = *(_QWORD *)v19;
  v23 = a1;
  v24 = a2;
  v25 = a3;
  v10 = UMPDOBJ::_AllocUserMem(v19, 4u, 1);
  LODWORD(v27) = 0;
  v28 = 0LL;
  v26 = v10;
  if ( !v10 || (LODWORD(Size) = 8, (unsigned int)UMPDOBJ::Thunk(v9, v21, 0x48u, &v18, Size) == -1) )
  {
LABEL_11:
    v12 = 0LL;
    goto LABEL_10;
  }
  KernelPtr = UMPDOBJ::GetKernelPtr((char **)v9, (char *)v26);
  v12 = (char *)v18;
  *a4 = *(_DWORD *)KernelPtr;
  if ( !v12 )
    goto LABEL_9;
  if ( a3 )
  {
    v13 = *((_BYTE *)v9 + 456);
    v14 = v12;
    if ( v13 )
    {
      v14 = UMPDOBJ::GetKernelPtr((char **)v9, (char *)v28);
      v15 = (unsigned int)v27;
    }
    else
    {
      v15 = -1LL;
    }
    IFIMETRICS = ProbeAndReadIFIMETRICS((struct _IFIMETRICS *)v14, v13 == 0, v15);
    if ( (unsigned int)bIsFreeHooked(a1, v9) )
    {
      memset(v20, 0, sizeof(v20));
      if ( IFIMETRICS )
        PushThreadGuardedObject(v20, IFIMETRICS, Win32FreePool);
      UMPDMyDrvFree(v9, a1, v12, *a4);
      if ( IFIMETRICS )
        PopThreadGuardedObject(v20);
    }
LABEL_9:
    *a4 = (unsigned int)IFIMETRICS;
    v12 = (char *)IFIMETRICS;
  }
LABEL_10:
  XUMPDOBJ::~XUMPDOBJ(&v19);
  return (struct _IFIMETRICS *)v12;
}
