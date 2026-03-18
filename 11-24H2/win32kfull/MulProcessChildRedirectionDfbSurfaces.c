/*
 * XREFs of MulProcessChildRedirectionDfbSurfaces @ 0x1403320C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1400CDCC4 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall MulProcessChildRedirectionDfbSurfaces(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 *v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  _BYTE v11[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v11);
  LOBYTE(v2) = 5;
  v12 = HmgShareLock(a1, v2);
  v3 = 1;
  v4 = 0LL;
  v5 = *(__int64 **)(v12 + 24);
  v6 = *v5;
  while ( (unsigned int)v4 < *(_DWORD *)(v6 + 16) )
  {
    v7 = *(_QWORD *)(v5[1] + 8 * v4);
    v8 = *(_DWORD *)(v7 + 92);
    v9 = v7 - 24;
    if ( (v8 & 1) != 0 && !pProcessDfbSurfacesInternal(v9, 1LL) )
    {
      v3 = 0;
      break;
    }
    v4 = (unsigned int)(v4 + 1);
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v11);
  return v3;
}
