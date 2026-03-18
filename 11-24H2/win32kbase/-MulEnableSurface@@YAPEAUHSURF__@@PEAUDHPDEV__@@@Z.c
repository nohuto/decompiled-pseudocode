/*
 * XREFs of ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1400F8150
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x14000DF20 (--0ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     ??1ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x14000EA60 (--1ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140029D30 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     EngUnlockSurface @ 0x140035B00 (EngUnlockSurface.c)
 *     EngLockSurface @ 0x140036810 (EngLockSurface.c)
 *     EngCreateClip @ 0x1400F8300 (EngCreateClip.c)
 *     EngDeleteClip @ 0x1400F83B0 (EngDeleteClip.c)
 *     EngDeleteSurface @ 0x1400F8410 (EngDeleteSurface.c)
 *     EngCreateDeviceSurface @ 0x1400F84A0 (EngCreateDeviceSurface.c)
 *     EngModifySurface @ 0x140104550 (EngModifySurface.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

HSURF __fastcall MulEnableSurface(DHSURF dhsurf)
{
  ULONG v2; // r8d
  HSURF DeviceSurface; // rax
  HSURF v4; // rdi
  FLONG v5; // r8d
  HDEV v6; // rdx
  SURFOBJ *v7; // rax
  CLIPOBJ *Clip; // rax
  CLIPOBJ *v9; // rsi
  _QWORD *v10; // rdx
  __int64 v11; // rax
  SIZEL sizl; // [rsp+40h] [rbp-88h]
  _BYTE v14[96]; // [rsp+50h] [rbp-78h] BYREF

  ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v14);
  v2 = *((_DWORD *)dhsurf + 16);
  sizl.cx = *((_DWORD *)dhsurf + 20) - *((_DWORD *)dhsurf + 18);
  sizl.cy = *((_DWORD *)dhsurf + 21) - *((_DWORD *)dhsurf + 19);
  *((_DWORD *)dhsurf + 17) = 230891;
  DeviceSurface = EngCreateDeviceSurface(dhsurf, sizl, v2);
  v4 = DeviceSurface;
  if ( DeviceSurface
    && (v5 = *((_DWORD *)dhsurf + 17),
        v6 = (HDEV)*((_QWORD *)dhsurf + 4),
        *((_QWORD *)dhsurf + 3) = DeviceSurface,
        EngModifySurface(DeviceSurface, v6, v5, 3u, dhsurf, 0LL, 0, 0LL))
    && (v7 = EngLockSurface(v4), (*((_QWORD *)dhsurf + 6) = v7) != 0LL)
    && (Clip = EngCreateClip(), (v9 = Clip) != 0LL) )
  {
    Clip->rclBounds = *(RECTL *)(dhsurf + 18);
    RGNOBJ::vSet((RGNOBJ *)&Clip[2].rclBounds.top, &Clip->rclBounds);
    v10 = *(_QWORD **)dhsurf;
    *((_QWORD *)dhsurf + 7) = v9;
    while ( v10 )
    {
      v11 = v10[6];
      if ( (*(_DWORD *)(v11 + 1808) & 0x8000000) != 0 )
        *(_QWORD *)(*(_QWORD *)(v11 + 2544) + 144LL) = v4;
      v10 = (_QWORD *)*v10;
    }
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v14);
    return v4;
  }
  else
  {
    EngDeleteClip(*((CLIPOBJ **)dhsurf + 7));
    EngUnlockSurface(*((SURFOBJ **)dhsurf + 6));
    EngDeleteSurface(*((HSURF *)dhsurf + 3));
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v14);
    return 0LL;
  }
}
