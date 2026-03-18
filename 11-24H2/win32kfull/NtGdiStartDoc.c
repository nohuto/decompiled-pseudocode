/*
 * XREFs of NtGdiStartDoc @ 0x140327FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x140196380 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     ?GrepStartDoc@@YAHAEAVXDCOBJ@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z @ 0x1403268F4 (-GrepStartDoc@@YAHAEAVXDCOBJ@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiStartDoc(HDC a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v4; // rdi
  unsigned int started; // r13d
  _WORD *v6; // rsi
  _WORD *v7; // r14
  _WORD *v8; // r12
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rax
  void *v11; // rax
  size_t v12; // rdi
  const void *v13; // rdx
  _WORD *v14; // rsi
  unsigned __int64 v15; // rax
  size_t v16; // r10
  void *v17; // rax
  size_t v18; // rdi
  _WORD *v19; // rsi
  void *v20; // rax
  size_t v21; // rdi
  _WORD *v22; // rsi
  __int64 v23; // rdx
  int v24; // ecx
  __int64 SessionState; // rax
  __int64 v26; // rdx
  int v28; // [rsp+20h] [rbp-138h]
  size_t Size; // [rsp+30h] [rbp-128h] BYREF
  int v30; // [rsp+38h] [rbp-120h]
  int v31; // [rsp+3Ch] [rbp-11Ch] BYREF
  __int64 v32; // [rsp+40h] [rbp-118h] BYREF
  void *v33[2]; // [rsp+48h] [rbp-110h]
  void *v34; // [rsp+58h] [rbp-100h]
  __int64 v35; // [rsp+60h] [rbp-F8h]
  unsigned __int64 v36; // [rsp+68h] [rbp-F0h]
  _BYTE v37[64]; // [rsp+70h] [rbp-E8h] BYREF
  DC *v38[21]; // [rsp+B0h] [rbp-A8h] BYREF

  v4 = a3;
  started = 0;
  v31 = 0;
  v32 = 0LL;
  v35 = 0LL;
  Size = 0LL;
  v30 = 1;
  *(_OWORD *)v33 = 0LL;
  v34 = 0LL;
  if ( a2 )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    LODWORD(v32) = *(_DWORD *)a2;
    v6 = *(_WORD **)(a2 + 8);
    v7 = *(_WORD **)(a2 + 16);
    v8 = *(_WORD **)(a2 + 24);
    if ( v6 )
    {
      if ( ((unsigned __int8)v6 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = -1LL;
      v10 = -1LL;
      do
        ++v10;
      while ( v6[v10] );
      if ( v10 + 1 >= v10 )
      {
        v36 = v10 + 1;
        if ( (int)ULongLongMult(v10 + 1, 2uLL, &Size) >= 0 && Size <= 0xFFFFFFFF )
        {
          if ( (_DWORD)Size )
            v11 = (void *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
          else
            v11 = 0LL;
          v33[0] = v11;
        }
      }
      if ( v33[0] )
      {
        v12 = Size;
        v13 = v6;
        v14 = v33[0];
        memmove(v33[0], v13, Size);
        if ( v12 >= 2 )
          v14[(v12 >> 1) - 1] = 0;
      }
      else
      {
        v30 = 0;
      }
    }
    else
    {
      v9 = -1LL;
    }
    if ( v7 )
    {
      if ( ((unsigned __int8)v7 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = -1LL;
      do
        ++v15;
      while ( v7[v15] );
      if ( v15 + 1 >= v15 )
      {
        v36 = v15 + 1;
        if ( (int)ULongLongMult(v15 + 1, 2uLL, &Size) >= 0 && Size <= v16 )
        {
          if ( (_DWORD)Size )
            v17 = (void *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
          else
            v17 = 0LL;
          v33[1] = v17;
        }
      }
      if ( v33[1] )
      {
        v18 = Size;
        v19 = v33[1];
        memmove(v33[1], v7, Size);
        if ( v18 >= 2 )
          v19[(v18 >> 1) - 1] = 0;
      }
      else
      {
        v30 = 0;
      }
    }
    if ( (unsigned __int64)(int)v32 >= 0x28 && v8 )
    {
      if ( ((unsigned __int8)v8 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      do
        ++v9;
      while ( v8[v9] );
      if ( v9 + 1 >= v9 )
      {
        v36 = v9 + 1;
        if ( (int)ULongLongMult(v9 + 1, 2uLL, &Size) >= 0 && Size <= 0xFFFFFFFF )
        {
          if ( (_DWORD)Size )
            v20 = (void *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
          else
            v20 = 0LL;
          v34 = v20;
        }
      }
      if ( v34 )
      {
        v21 = Size;
        v22 = v34;
        memmove(v34, v8, Size);
        if ( v21 >= 2 )
          v22[(v21 >> 1) - 1] = 0;
      }
      else
      {
        v30 = 0;
      }
      v4 = a3;
    }
    else
    {
      v4 = a3;
    }
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v38, a1);
  if ( v30 && v38[0] )
  {
    SessionState = W32GetSessionState(v24, v23);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v37,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
    if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v37, v26) )
    {
      started = GrepStartDoc(v38, (__int64)&v32, &v31, a4, v28);
      if ( started )
      {
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (_DWORD *)MmUserProbeAddress;
        *v4 = v31;
      }
    }
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v37);
  }
  if ( v33[0] )
    FreeThreadBufferWithTag(v33[0]);
  if ( v33[1] )
    FreeThreadBufferWithTag(v33[1]);
  if ( v34 )
    FreeThreadBufferWithTag(v34);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v38);
  return started;
}
