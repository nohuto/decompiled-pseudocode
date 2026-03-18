/*
 * XREFs of NtGdiEngAssociateSurface @ 0x1C02C8120
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264500 (--0SURFREF@@QEAA@XZ.c)
 *     ?ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z @ 0x1C02C6D2C (-ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z.c)
 *     ?ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z @ 0x1C02C6E00 (-ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z.c)
 */

__int64 __fastcall NtGdiEngAssociateSurface(HSURF hsurf, Gre::Base *a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // rax
  unsigned int v11; // ebx
  HDEV v12; // r10
  _BYTE v14[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]
  __int64 *v16; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  SURFREF::SURFREF((SURFREF *)v14);
  LOBYTE(v7) = 5;
  v8 = HmgShareLockCheckIgnoreStockBit(hsurf, v7);
  v15 = v8;
  v9 = v8;
  if ( v8 && (*(_DWORD *)(v8 + 112) & 0x40000) != 0 )
  {
    v10 = ValidUmpdHdev(a2);
    if ( v10 )
    {
      v11 = a3 & 0xFFFFB7EF;
      v16 = v10;
      if ( (v11 & 0xFFFC4A10) == 0 && (unsigned int)ValidUmpdHooks((struct PDEVOBJ *)&v16, v11) )
        v6 = EngAssociateSurface(hsurf, v12, v11);
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v16);
    }
    v9 = v15;
  }
  if ( v9 )
    DEC_SHARE_REF_CNT(v9);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v14);
  return v6;
}
