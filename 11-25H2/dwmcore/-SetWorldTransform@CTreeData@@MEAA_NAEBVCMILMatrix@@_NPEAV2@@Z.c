/*
 * XREFs of ?SetWorldTransform@CTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1801B66E0
 * Callers:
 *     ?SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1801B6320 (-SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z.c)
 * Callees:
 *     ??9CMILMatrix@@QEBA_NAEBV0@@Z @ 0x180096900 (--9CMILMatrix@@QEBA_NAEBV0@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

bool __fastcall CTreeData::SetWorldTransform(
        CTreeData *this,
        const struct CMILMatrix *a2,
        __int64 a3,
        struct CMILMatrix *a4)
{
  char v6; // bp
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  HANDLE ProcessHeap; // rax
  _OWORD *v15; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 24LL) + 888LL);
  if ( CMILMatrix::operator!=((float *)this + 68, (float *)a2) )
  {
    v6 = 1;
    *(_OWORD *)v9 = *(_OWORD *)v8;
    *(_OWORD *)(v9 + 16) = *(_OWORD *)(v8 + 16);
    *(_OWORD *)(v9 + 32) = *(_OWORD *)(v8 + 32);
    *(_OWORD *)(v9 + 48) = *(_OWORD *)(v8 + 48);
    *(_DWORD *)(v9 + 64) = *(_DWORD *)(v8 + 64);
  }
  *((_BYTE *)this + 11) = v10;
  if ( a4 )
  {
    v12 = *((_QWORD *)this + 32);
    if ( v12 )
    {
      *(_OWORD *)v12 = *(_OWORD *)v11;
      *(_OWORD *)(v12 + 16) = *(_OWORD *)(v11 + 16);
      *(_OWORD *)(v12 + 32) = *(_OWORD *)(v11 + 32);
      *(_OWORD *)(v12 + 48) = *(_OWORD *)(v11 + 48);
      *(_DWORD *)(v12 + 64) = *(_DWORD *)(v11 + 64);
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      v15 = HeapAlloc(ProcessHeap, 0, 0x44uLL);
      if ( !v15 )
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      *v15 = *(_OWORD *)a4;
      v15[1] = *((_OWORD *)a4 + 1);
      v15[2] = *((_OWORD *)a4 + 2);
      v15[3] = *((_OWORD *)a4 + 3);
      *((_DWORD *)v15 + 16) = *((_DWORD *)a4 + 16);
      *((_QWORD *)this + 32) = v15;
    }
  }
  if ( v6 || !*((_QWORD *)this + 28) )
    *((_QWORD *)this + 28) = v7;
  return *((_QWORD *)this + 28) == v7;
}
