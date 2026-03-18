/*
 * XREFs of CreateTokenManagerSessionGlobal @ 0x140053D80
 * Callers:
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1403E21A8 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     ??0CTokenManager@@AEAA@XZ @ 0x140053E00 (--0CTokenManager@@AEAA@XZ.c)
 *     ?Initialize@CTokenManager@@AEAAJXZ @ 0x140053F30 (-Initialize@CTokenManager@@AEAAJXZ.c)
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x140097DA0 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall CreateTokenManagerSessionGlobal(CTokenManager **a1, __int64 a2, __int64 a3, __int64 a4)
{
  CTokenManager *Pool2; // rax
  CTokenManager *v6; // rax
  CTokenManager *v7; // rbx
  unsigned int v8; // edx
  int v9; // edi

  Pool2 = (CTokenManager *)ExAllocatePool2(256LL, 392LL, 1735609684LL, a4);
  if ( Pool2 && (v6 = CTokenManager::CTokenManager(Pool2), (v7 = v6) != 0LL) )
  {
    v9 = CTokenManager::Initialize(v6);
    if ( v9 < 0 )
      CTokenManager::`scalar deleting destructor'(v7, v8);
    else
      *a1 = v7;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v9;
}
