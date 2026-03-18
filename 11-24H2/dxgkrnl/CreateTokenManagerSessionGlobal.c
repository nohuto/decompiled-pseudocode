/*
 * XREFs of CreateTokenManagerSessionGlobal @ 0x140053B0C
 * Callers:
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1403DABE8 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     ??0CTokenManager@@AEAA@XZ @ 0x140053B8C (--0CTokenManager@@AEAA@XZ.c)
 *     ?Initialize@CTokenManager@@AEAAJXZ @ 0x140053CBC (-Initialize@CTokenManager@@AEAAJXZ.c)
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x140099FCC (--_GCTokenManager@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall CreateTokenManagerSessionGlobal(CTokenManager **a1)
{
  CTokenManager *Pool2; // rax
  CTokenManager *v3; // rax
  CTokenManager *v4; // rbx
  unsigned int v5; // edx
  int v6; // edi

  Pool2 = (CTokenManager *)ExAllocatePool2(256LL, 392LL, 1735609684LL);
  if ( Pool2 && (v3 = CTokenManager::CTokenManager(Pool2), (v4 = v3) != 0LL) )
  {
    v6 = CTokenManager::Initialize(v3);
    if ( v6 < 0 )
      CTokenManager::`scalar deleting destructor'(v4, v5);
    else
      *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
