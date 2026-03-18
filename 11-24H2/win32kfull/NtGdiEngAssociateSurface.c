/*
 * XREFs of NtGdiEngAssociateSurface @ 0x140210A60
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1400CDCC4 (--0SURFREF@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z @ 0x14026B39C (-ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z.c)
 *     ?ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z @ 0x14026CAA8 (-ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z.c)
 */

__int64 __fastcall NtGdiEngAssociateSurface(HSURF hsurf, HDEV a2, int a3)
{
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rax
  HDEV v10; // rax
  FLONG v11; // edi
  HDEV v12; // r10
  _BYTE v14[32]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-88h]
  struct W32_PUSH_LOCK *v16[14]; // [rsp+50h] [rbp-78h] BYREF
  HDEV v17; // [rsp+E8h] [rbp+20h] BYREF

  CurrentThread = GreGetCurrentThread((__int64)hsurf, (__int64)a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v16, CurrentThread);
  v7 = 0;
  SURFREF::SURFREF((SURFREF *)v14);
  LOBYTE(v8) = 5;
  v9 = HmgShareLockCheckIgnoreStockBit(hsurf, v8);
  v15 = v9;
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 112) & 0x40000) != 0 )
    {
      v10 = ValidUmpdHdev(a2);
      if ( v10 )
      {
        v11 = a3 & 0xFFFFB7EF;
        v17 = v10;
        if ( (v11 & 0xFFFC4A10) == 0 && (unsigned int)ValidUmpdHooks((struct PDEVOBJ *)&v17, v11) )
          v7 = EngAssociateSurface(hsurf, v12, v11);
        PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v17);
      }
    }
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v14);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v16);
  return v7;
}
