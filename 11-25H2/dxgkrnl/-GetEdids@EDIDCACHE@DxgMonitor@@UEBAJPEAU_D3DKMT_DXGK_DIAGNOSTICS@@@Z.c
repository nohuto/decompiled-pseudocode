/*
 * XREFs of ?GetEdids@EDIDCACHE@DxgMonitor@@UEBAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z @ 0x140269210
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall DxgMonitor::EDIDCACHE::GetEdids(DxgMonitor::EDIDCACHE *this, struct _D3DKMT_DXGK_DIAGNOSTICS *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rdx
  unsigned int v6; // r8d
  __int64 v7; // r9
  unsigned int v8; // ecx
  char *v9; // rdi
  unsigned int v10; // r9d
  unsigned int i; // edx
  char *v12; // rax
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DxgMonitor::EDIDCACHE *)((char *)this + 616), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v4 = 0;
  v5 = (_QWORD *)((char *)this + 8);
  v6 = 0;
  v7 = 4LL;
  do
  {
    v8 = v6 + 1;
    if ( !*v5 )
      v8 = v6;
    v5 += 19;
    v6 = v8;
    --v7;
  }
  while ( v7 );
  if ( *(unsigned int *)a2 >= 152 * (unsigned __int64)v8 )
  {
    v9 = (char *)a2 + 4;
    v10 = 0;
    for ( i = 0; v10 < v8; ++i )
    {
      if ( i >= 4 )
        break;
      v12 = (char *)this + 152 * i;
      if ( *((_QWORD *)v12 + 1) )
      {
        *(_OWORD *)v9 = *(_OWORD *)(v12 + 8);
        *((_OWORD *)v9 + 1) = *(_OWORD *)(v12 + 24);
        *((_OWORD *)v9 + 2) = *(_OWORD *)(v12 + 40);
        *((_OWORD *)v9 + 3) = *(_OWORD *)(v12 + 56);
        *((_OWORD *)v9 + 4) = *(_OWORD *)(v12 + 72);
        *((_OWORD *)v9 + 5) = *(_OWORD *)(v12 + 88);
        *((_OWORD *)v9 + 6) = *(_OWORD *)(v12 + 104);
        *((_OWORD *)v9 + 7) = *(_OWORD *)(v12 + 120);
        *((_OWORD *)v9 + 8) = *(_OWORD *)(v12 + 136);
        *((_QWORD *)v9 + 18) = *((_QWORD *)v12 + 19);
        v9 += 152;
        ++v10;
      }
    }
  }
  else
  {
    v4 = 1075707914;
    *(_DWORD *)a2 = 152 * v8;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  return v4;
}
