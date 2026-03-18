/*
 * XREFs of NtGdiIcmBrushInfo @ 0x14033C040
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     GreGetBitmapBitsSize @ 0x14016305C (GreGetBitmapBitsSize.c)
 *     ?GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x14033B334 (-GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GrepIcmSetBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x14033B578 (-GrepIcmSetBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 */

__int64 __fastcall NtGdiIcmBrushInfo(
        HDC a1,
        HBRUSH a2,
        unsigned __int64 a3,
        __int64 a4,
        ULONG64 a5,
        ULONG64 a6,
        ULONG64 a7,
        int a8)
{
  __int64 result; // rax
  _OWORD *v11; // rsi
  struct tagBITMAPINFO *v12; // r15
  unsigned int v13; // edi
  unsigned int **v14; // rdx
  __int64 v15; // rcx
  unsigned int *v16; // rcx
  unsigned int BitmapBitsSize; // eax
  unsigned int v18; // r11d
  struct Gre::Base::SESSION_GLOBALS **v19; // rcx
  unsigned int *v20; // rdx
  __int64 v21; // rcx
  _DWORD *v22; // rdx
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  unsigned int v25; // [rsp+40h] [rbp-128h] BYREF
  int v26; // [rsp+44h] [rbp-124h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-120h] BYREF
  __int64 v28; // [rsp+50h] [rbp-118h]
  struct Gre::Base::SESSION_GLOBALS *v29[14]; // [rsp+60h] [rbp-108h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v30[19]; // [rsp+D0h] [rbp-98h] BYREF

  v25 = 0;
  result = PALLOCNOZ(0x428u, 1835231559LL);
  v11 = (_OWORD *)result;
  v12 = (struct tagBITMAPINFO *)result;
  v28 = result;
  if ( result )
  {
    if ( a8 )
    {
      if ( a8 != 1 )
      {
        EngSetLastError(0x57u);
LABEL_5:
        v13 = 0;
LABEL_45:
        Win32FreePool(v12);
        return v13;
      }
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = (unsigned int **)MmUserProbeAddress;
      if ( a3 + 1064 > MmUserProbeAddress || a3 + 1064 < a3 )
        v14 = (unsigned int **)MmUserProbeAddress;
      v15 = 8LL;
      do
      {
        *v11 = *(_OWORD *)a3;
        v11[1] = *(_OWORD *)(a3 + 16);
        v11[2] = *(_OWORD *)(a3 + 32);
        v11[3] = *(_OWORD *)(a3 + 48);
        v11[4] = *(_OWORD *)(a3 + 64);
        v11[5] = *(_OWORD *)(a3 + 80);
        v11[6] = *(_OWORD *)(a3 + 96);
        v11 += 8;
        *(v11 - 1) = *(_OWORD *)(a3 + 112);
        a3 += 128LL;
        --v15;
      }
      while ( v15 );
      *v11 = *(_OWORD *)a3;
      v11[1] = *(_OWORD *)(a3 + 16);
      *((_QWORD *)v11 + 4) = *(_QWORD *)(a3 + 32);
      v16 = (unsigned int *)a5;
      if ( a5 >= (unsigned __int64)*v14 )
        v16 = *v14;
      v25 = *v16;
      BitmapBitsSize = GreGetBitmapBitsSize(result);
      if ( !BitmapBitsSize || BitmapBitsSize > v18 )
        goto LABEL_5;
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v29, a1);
      if ( v29[0] )
        v13 = GrepIcmSetBrushBitmap(v29, a2, v12, a4);
      else
        v13 = 0;
      v19 = v29;
    }
    else
    {
      v26 = 0;
      v27 = 0;
      if ( a4 )
      {
        v20 = (unsigned int *)a5;
        if ( a5 >= MmUserProbeAddress )
          v20 = (unsigned int *)MmUserProbeAddress;
        v25 = *v20;
        ProbeForWrite((volatile void *)a4, v25, 4u);
      }
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v30, a1);
      if ( v30[0] )
        v13 = GrepIcmQueryBrushBitmap(v30, a2, v12, a4, &v25, &v27, &v26);
      else
        v13 = 0;
      if ( v13 )
      {
        ProbeForWrite((volatile void *)a3, 0x428uLL, 4u);
        v21 = 8LL;
        do
        {
          *(_OWORD *)a3 = *v11;
          *(_OWORD *)(a3 + 16) = v11[1];
          *(_OWORD *)(a3 + 32) = v11[2];
          *(_OWORD *)(a3 + 48) = v11[3];
          *(_OWORD *)(a3 + 64) = v11[4];
          *(_OWORD *)(a3 + 80) = v11[5];
          *(_OWORD *)(a3 + 96) = v11[6];
          a3 += 128LL;
          *(_OWORD *)(a3 - 16) = v11[7];
          v11 += 8;
          --v21;
        }
        while ( v21 );
        *(_OWORD *)a3 = *v11;
        *(_OWORD *)(a3 + 16) = v11[1];
        *(_QWORD *)(a3 + 32) = *((_QWORD *)v11 + 4);
        v22 = (_DWORD *)a5;
        if ( a5 >= MmUserProbeAddress )
          v22 = (_DWORD *)MmUserProbeAddress;
        *v22 = v25;
        v23 = (_DWORD *)a7;
        if ( a7 )
        {
          if ( a7 >= MmUserProbeAddress )
            v23 = (_DWORD *)MmUserProbeAddress;
          *v23 = v26;
        }
        v24 = (_DWORD *)a6;
        if ( a6 )
        {
          if ( a6 >= MmUserProbeAddress )
            v24 = (_DWORD *)MmUserProbeAddress;
          *v24 = v27;
        }
      }
      v19 = v30;
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v19);
    goto LABEL_45;
  }
  return result;
}
