/*
 * XREFs of NtGdiEngMarkBandingSurface @ 0x14026C610
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14001F1E8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1400CDCC4 (--0SURFREF@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     EngMarkBandingSurface @ 0x140305050 (EngMarkBandingSurface.c)
 */

__int64 __fastcall NtGdiEngMarkBandingSurface(HSURF a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  BOOL v6; // edi
  _BYTE v8[32]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+40h] [rbp-A8h]
  _BYTE v10[32]; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v11; // [rsp+68h] [rbp-80h]
  struct W32_PUSH_LOCK *v12[14]; // [rsp+70h] [rbp-78h] BYREF

  CurrentThread = GreGetCurrentThread((__int64)a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v12, CurrentThread);
  SURFREF::SURFREF((SURFREF *)v10);
  LOBYTE(v4) = 5;
  v11 = HmgShareLockCheckIgnoreStockBit(a1, v4);
  SURFREF::SURFREF((SURFREF *)v8, a1);
  v5 = 1;
  v6 = v9 && (*(_DWORD *)(v9 + 112) & 0x40000) != 0;
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v8);
  if ( !v6 || !EngMarkBandingSurface(a1) )
    v5 = 0;
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v10);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v12);
  return v5;
}
