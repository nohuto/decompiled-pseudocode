/*
 * XREFs of GreRealizePalette @ 0x1C02D0D2C
 * Callers:
 *     xxxRealizePalette @ 0x1C02145A8 (xxxRealizePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C026B540 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C008A7A4 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1C00C2438 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C24 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C70 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C011C7BC (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02C13F0 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02D7E6C (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 */

__int64 __fastcall GreRealizePalette(HDC a1)
{
  Gre::Base *v1; // rcx
  __int64 v2; // rax
  struct Gre::Base::SESSION_GLOBALS *v3; // rdi
  __int64 v4; // rdx
  char *v5; // r8
  __int64 v6; // r9
  Gre::Base *v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rdx
  int v17; // eax
  HDC v18; // rdi
  _DWORD *v19; // rcx
  void *v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 matched; // rax
  HDC v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _DWORD *v29; // rdx
  int v30; // eax
  HDC v31; // rdi
  void *v32; // rcx
  _DWORD *v33; // rcx
  HDC v34; // rbx
  void (__fastcall *v35)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  signed __int64 v36; // r10
  unsigned int v37; // ebx
  __int64 v39; // [rsp+50h] [rbp-B0h] BYREF
  Gre::Base *v40; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v41[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+70h] [rbp-90h] BYREF
  int v43; // [rsp+78h] [rbp-88h]
  _QWORD *v44; // [rsp+80h] [rbp-80h] BYREF
  __int64 v45; // [rsp+88h] [rbp-78h] BYREF
  __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  char v47[8]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v48[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v49[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v50[2]; // [rsp+C0h] [rbp-40h] BYREF
  char v51[32]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v52; // [rsp+F0h] [rbp-10h] BYREF
  Gre::Base *v53; // [rsp+100h] [rbp+0h]
  int v54; // [rsp+108h] [rbp+8h]
  _QWORD v55[2]; // [rsp+110h] [rbp+10h] BYREF
  char v56[40]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v57; // [rsp+148h] [rbp+48h]
  __int64 v58; // [rsp+150h] [rbp+50h]
  char v59; // [rsp+1A8h] [rbp+A8h] BYREF
  int v60; // [rsp+1B0h] [rbp+B0h] BYREF
  int v61; // [rsp+1B8h] [rbp+B8h] BYREF

  v61 = 0;
  v60 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v50, a1);
  v2 = v50[0];
  if ( !v50[0] )
    goto LABEL_83;
  v3 = Gre::Base::Globals(v1);
  v40 = *(Gre::Base **)(v50[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v59);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v47, (struct PDEVOBJ *)&v40);
  v46 = *((_QWORD *)v40 + 7);
  GreAcquireSemaphore(v46);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v55);
  v7 = v40;
  v58 = 0LL;
  v52 = 0LL;
  v57 = 0LL;
  v55[0] = 0LL;
  v54 = 1;
  if ( (*((_DWORD *)v40 + 10) & 1) != 0 )
  {
    Gre::Base::Globals(v40);
    *(_QWORD *)&v52 = *((_QWORD *)v40 + 6);
    v53 = v40;
    GreAcquireSemaphore(v52);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v52, 11LL);
    v7 = v40;
  }
  v8 = *((_QWORD *)v7 + 222);
  v39 = v8;
  v9 = *(_QWORD **)(v50[0] + 88LL);
  v44 = v9;
  v10 = *v9;
  if ( (*((_DWORD *)v7 + 535) & 0x100) != 0 )
  {
    v45 = *((_QWORD *)v3 + 5);
    GreAcquireSemaphore(v45);
    if ( v10 != *((_QWORD *)v3 + 479) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v50[0] + 976LL) + 208LL) != 1 )
        goto LABEL_88;
      v11 = (unsigned __int16)*((_DWORD *)v3 + 958) | (*((_DWORD *)v3 + 958) >> 8) & 0xFF0000u;
      if ( ((unsigned __int16)v10 | ((unsigned int)v10 >> 8) & 0xFF0000) != (_DWORD)v11 )
        goto LABEL_88;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      if ( *((_QWORD *)v3 + 480) != CurrentProcessWin32Process )
      {
LABEL_88:
        if ( XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v44) )
          goto LABEL_68;
        v16 = (_DWORD *)v9[10];
        if ( v16 )
        {
          v17 = XEPALOBJ::ulTime((XEPALOBJ *)&v39);
          if ( *v16 == v17 )
            goto LABEL_68;
        }
        GreAcquireHmgrSemaphore(v13, v16, v14, v15);
        v18 = (HDC)v9[5];
        while ( v18 )
        {
          MDCOBJ::MDCOBJ((MDCOBJ *)v41, v18);
          if ( !v41[0] )
            goto LABEL_38;
          *(_DWORD *)(*(_QWORD *)(v41[0] + 976LL) + 152LL) = *(_DWORD *)(*(_QWORD *)(v50[0] + 976LL) + 152LL) | 0xF;
          v18 = *(HDC *)(v41[0] + 984LL);
          XDCOBJ::RestoreAttributes((XDCOBJ *)v41);
          v41[0] = 0LL;
        }
        v20 = (void *)v9[11];
        if ( v20 )
        {
          if ( v20 != (void *)v9[9] )
            Win32FreePool(v20);
          v9[11] = 0LL;
        }
        v19 = (_DWORD *)v9[9];
        if ( v19 )
        {
          if ( *v19 )
            goto LABEL_34;
          if ( (_DWORD *)v9[10] != v19 )
            Win32FreePool(v19);
          v9[9] = 0LL;
        }
        v43 = 0;
        v42 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v42, 1u, *(_DWORD *)(v39 + 28), 0LL, 0, 0, 0, 0x800u, 1) )
        {
          v21 = *(unsigned int *)(v39 + 28);
          v22 = *(_DWORD *)(v42 + 28);
          if ( (unsigned int)v21 >= v22 )
            v21 = v22;
          memmove(*(void **)(v42 + 112), *(const void **)(v39 + 112), 4 * v21);
          *(_DWORD *)(v42 + 60) = *(_DWORD *)(v39 + 60);
          *(_DWORD *)(v42 + 24) = *(_DWORD *)(v39 + 24);
          XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v42);
          v9[9] = ptransMatchAPal(v23, v42, v9, 1LL, &v59, &v59);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v42);
LABEL_34:
        v9[11] = v9[10];
        if ( v9[9] )
        {
          matched = ptransMatchAPal(v19, v39, v9, 0LL, &v60, &v61);
          v9[10] = matched;
          if ( !matched )
            v9[10] = v9[9];
        }
        else
        {
          v9[10] = 0LL;
        }
LABEL_38:
        v25 = (HDC)v9[5];
        while ( v25 != v18 )
        {
          MDCOBJ::MDCOBJ((MDCOBJ *)v48, v25);
          _InterlockedDecrement((volatile signed __int32 *)(v48[0] + 12LL));
          v25 = *(HDC *)(v48[0] + 984LL);
          XDCOBJ::vUnlockFast((XDCOBJ *)v48);
        }
LABEL_67:
        GreReleaseHmgrSemaphore(v19);
LABEL_68:
        SEMOBJ::vUnlock((SEMOBJ *)&v45);
        v7 = v40;
        v8 = v39;
        goto LABEL_69;
      }
    }
    if ( XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v44) )
      goto LABEL_68;
    v29 = (_DWORD *)v9[9];
    if ( v29 )
    {
      if ( v29 == (_DWORD *)v9[10] )
      {
        v30 = XEPALOBJ::ulTime((XEPALOBJ *)&v39);
        if ( *v29 == v30 )
          goto LABEL_68;
      }
    }
    GreAcquireHmgrSemaphore(v26, v29, v27, v28);
    v31 = (HDC)v9[5];
    while ( v31 )
    {
      MDCOBJ::MDCOBJ((MDCOBJ *)v41, v31);
      if ( !v41[0] )
        goto LABEL_63;
      *(_DWORD *)(*(_QWORD *)(v41[0] + 976LL) + 152LL) = *(_DWORD *)(*(_QWORD *)(v50[0] + 976LL) + 152LL) | 0xF;
      v31 = *(HDC *)(v41[0] + 984LL);
      XDCOBJ::RestoreAttributes((XDCOBJ *)v41);
      v41[0] = 0LL;
    }
    v32 = (void *)v9[11];
    if ( v32 )
    {
      if ( v32 != (void *)v9[9] )
        Win32FreePool(v32);
      v9[11] = 0LL;
    }
    v33 = (_DWORD *)v9[9];
    if ( v33 )
    {
      if ( *v33 )
      {
        vMatchAPal(v50[0], v39, v9, &v60, &v61);
LABEL_62:
        v9[11] = v9[10];
        v9[10] = v9[9];
LABEL_63:
        v34 = (HDC)v9[5];
        while ( v34 != v31 )
        {
          MDCOBJ::MDCOBJ((MDCOBJ *)v49, v34);
          _InterlockedDecrement((volatile signed __int32 *)(v49[0] + 12LL));
          v34 = *(HDC *)(v49[0] + 984LL);
          XDCOBJ::vUnlockFast((XDCOBJ *)v49);
        }
        goto LABEL_67;
      }
      if ( (_DWORD *)v9[10] != v33 )
        Win32FreePool(v33);
      v9[9] = 0LL;
    }
    v9[9] = ptransMatchAPal(v33, v39, v9, 1LL, &v60, &v61);
    goto LABEL_62;
  }
LABEL_69:
  if ( v60 )
  {
    if ( (*((_DWORD *)v7 + 10) & 0x400) == 0 )
    {
      v35 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))*((_QWORD *)v7 + 217);
      if ( v35 )
      {
        v35(*(_QWORD *)(*((_QWORD *)v7 + 3) + 1768LL), &v39, 0LL, 0LL, *(_DWORD *)(v8 + 28));
        v8 = v39;
      }
    }
    if ( *(_DWORD *)(v8 + 28) == 256 )
    {
      v5 = *(char **)(v8 + 112);
      v36 = (char *)aPalHalftone - v5;
      v6 = 0LL;
      while ( 1 )
      {
        v4 = (unsigned int)(*(_DWORD *)v5 ^ *(_DWORD *)&v5[v36]);
        if ( (v4 & 0xFFFFFF) != 0 )
          break;
        v6 = (unsigned int)(v6 + 1);
        v5 += 4;
        if ( (unsigned int)v6 >= 0x100 )
        {
          if ( (_DWORD)v6 == 256 )
          {
            *(_DWORD *)(v8 + 24) |= 0x100000u;
            goto LABEL_80;
          }
          break;
        }
      }
      *(_DWORD *)(v8 + 24) &= ~0x100000u;
    }
  }
LABEL_80:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v52, v4, (__int64)v5, v6);
  if ( v55[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v55);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v56);
  SEMOBJ::vUnlock((SEMOBJ *)&v46);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v47);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v59);
  v2 = v50[0];
LABEL_83:
  v37 = v61 | (v60 << 16);
  if ( v2 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v50);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v51);
  return v37;
}
