/*
 * XREFs of ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1401C3E10
 * Callers:
 *     <none>
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14000DEDC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     HmgIncrementShareReferenceCount @ 0x1400357D0 (HmgIncrementShareReferenceCount.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x140036A58 (--1SURFREF@@QEAA@XZ.c)
 *     ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1401C3F10 (-hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z.c)
 */

__int64 __fastcall BRUSH::bAddIcmDIB(BRUSH *this, void *a2, HSURF a3)
{
  unsigned int v6; // ebx
  _QWORD *v8; // rdi
  struct _BASEOBJECT *v9; // rbx
  __int64 v10; // rcx
  struct _FAST_MUTEX **v11; // rbx
  _BYTE v12[32]; // [rsp+20h] [rbp-38h] BYREF
  struct _BASEOBJECT *v13; // [rsp+40h] [rbp-18h]

  v6 = 0;
  if ( BRUSH::hFindIcmDIB(this, a2) )
    return 0LL;
  SURFREF::SURFREF((SURFREF *)v12, a3);
  if ( v13 )
  {
    v8 = (_QWORD *)PALLOCNOZ(24LL, 0x6C646247u);
    if ( v8 )
    {
      v9 = v13;
      HmgIncrementShareReferenceCount(v13);
      ++*((_DWORD *)v9 + 42);
      *v8 = a2;
      v8[1] = a3;
      v10 = *((_QWORD *)this + 11);
      v8[2] = v10;
      v11 = *(struct _FAST_MUTEX ***)(W32GetSessionState(v10) + 88);
      KeAcquireGuardedMutex(*v11 + 26);
      *((_QWORD *)this + 11) = v8;
      KeReleaseGuardedMutex(*v11 + 26);
      v6 = 1;
    }
  }
  SURFREF::~SURFREF((SURFREF *)v12);
  return v6;
}
