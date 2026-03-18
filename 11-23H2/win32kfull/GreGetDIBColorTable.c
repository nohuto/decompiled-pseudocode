/*
 * XREFs of GreGetDIBColorTable @ 0x1C0117950
 * Callers:
 *     <none>
 * Callees:
 *     ?vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0082B44 (-vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C011D240 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013DB9C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013DC2C (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026632C (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDIBColorTable(HDC a1, unsigned int a2, int a3, struct tagRGBQUAD *a4)
{
  unsigned int v5; // edi
  DC *v9; // rcx
  struct _DC_ATTR *UserAttr; // rax
  struct SURFACE *v11; // rcx
  unsigned int v12; // edi
  ULONG v14; // ecx
  DC *v15; // rcx
  struct _DC_ATTR *v16; // rax
  __int64 v17; // rbx
  DC *v18; // [rsp+20h] [rbp-79h] BYREF
  __int64 v19; // [rsp+28h] [rbp-71h]
  _BYTE v20[32]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v21; // [rsp+50h] [rbp-49h] BYREF
  __int128 v22; // [rsp+60h] [rbp-39h] BYREF
  __int64 v23; // [rsp+70h] [rbp-29h]
  int v24; // [rsp+78h] [rbp-21h]
  _QWORD v25[2]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v26[32]; // [rsp+90h] [rbp-9h] BYREF
  __int16 v27; // [rsp+B0h] [rbp+17h]
  __int64 v28; // [rsp+B8h] [rbp+1Fh]
  __int64 v29; // [rsp+C0h] [rbp+27h]
  __int64 v30; // [rsp+C8h] [rbp+2Fh]
  int v31; // [rsp+118h] [rbp+7Fh] BYREF

  v18 = 0LL;
  v5 = 0;
  v19 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v20);
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v18, a1);
  v9 = v18;
  if ( v18 )
  {
    if ( (*((_DWORD *)v18 + 11) & 2) == 0 )
    {
      if ( !HIDWORD(v19) )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v18);
        if ( UserAttr && !DC::SaveAttributes(v18, UserAttr) )
        {
          v9 = 0LL;
          _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
          v18 = 0LL;
          goto LABEL_11;
        }
        v9 = v18;
      }
      *((_DWORD *)v9 + 11) |= 2u;
      v9 = v18;
      LODWORD(v19) = 1;
    }
    if ( (*((_DWORD *)v9 + 130) & 4) != 0 )
    {
      DC::vMarkTransformDirty(v9);
      v9 = v18;
    }
  }
LABEL_11:
  if ( !a4 )
  {
    v14 = 87;
    goto LABEL_32;
  }
  if ( !v9 )
  {
    v14 = 6;
LABEL_32:
    EngSetLastError(v14);
    goto LABEL_33;
  }
  v25[0] = 0LL;
  v25[1] = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v26);
  v27 = 256;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  v25[0] = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)&v22, (struct XDCOBJ *)&v18);
  v11 = (struct SURFACE *)*((_QWORD *)v18 + 62);
  if ( !v11 )
    v11 = SURFACE::pdibDefault;
  if ( (!*((_WORD *)v11 + 50) && *((_QWORD *)v11 + 24) || *((_QWORD *)v11 + 16))
    && (unsigned int)(*((_DWORD *)v11 + 24) - 1) <= 2 )
  {
    v21 = *((_QWORD *)v11 + 16);
    v12 = *(_DWORD *)(v21 + 28);
    if ( a2 >= v12 )
    {
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v22);
      if ( v25[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v25);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v26);
      DCOBJ::~DCOBJ((DCOBJ *)&v18);
      return 0LL;
    }
    if ( a2 + a3 <= v12 )
      v12 = a2 + a3;
    v5 = v12 - a2;
    XEPALOBJ::vFill_rgbquads((XEPALOBJ *)&v21, a4, a2, v5);
  }
  else
  {
    EngSetLastError(6u);
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v22);
  if ( v25[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v25);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v26);
LABEL_33:
  v15 = v18;
  if ( v18 )
  {
    if ( (_DWORD)v19 && (*((_DWORD *)v18 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v19) )
      {
        v16 = XDCOBJ::GetUserAttr((XDCOBJ *)&v18);
        v15 = v18;
        if ( v16 )
        {
          DC::RestoreAttributes(v18, v16);
          v15 = v18;
        }
      }
      *((_DWORD *)v15 + 11) &= ~2u;
      v15 = v18;
      LODWORD(v19) = 0;
    }
    v31 = 0;
    v17 = *(_QWORD *)v15;
    HmgDecrementExclusiveReferenceCountEx(v15, HIDWORD(v19), &v31);
    if ( v31 )
      GrepDeleteDC(v17, 0x2000000LL);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v20);
  return v5;
}
