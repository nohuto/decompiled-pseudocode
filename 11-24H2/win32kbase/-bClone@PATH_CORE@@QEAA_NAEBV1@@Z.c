/*
 * XREFs of ?bClone@PATH_CORE@@QEAA_NAEBV1@@Z @ 0x14008E200
 * Callers:
 *     ?bClone@EPATHOBJ@@QEAAHAEBV1@@Z @ 0x14008E1A0 (-bClone@EPATHOBJ@@QEAAHAEBV1@@Z.c)
 * Callees:
 *     ?newpathrec@PATH_CORE@@QEAA_NPEAPEAUPATHRECORD@@PEAKK@Z @ 0x14008E35C (-newpathrec@PATH_CORE@@QEAA_NPEAPEAUPATHRECORD@@PEAKK@Z.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

char __fastcall PATH_CORE::bClone(PATH_CORE *this, const struct PATH_CORE *a2)
{
  _QWORD *v2; // r15
  __int128 v4; // xmm0
  __int64 *v5; // rdi
  int v6; // r14d
  char *v7; // r12
  unsigned int v8; // ebp
  struct PATHRECORD *v9; // rbx
  unsigned int v10; // r8d
  __int64 v11; // rcx
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  struct PATHRECORD *v14; // [rsp+58h] [rbp+10h] BYREF

  *((_QWORD *)this + 1) = 0LL;
  v2 = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v4 = *(_OWORD *)((char *)a2 + 24);
  v14 = 0LL;
  *(_OWORD *)((char *)this + 24) = v4;
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  v5 = (__int64 *)*((_QWORD *)a2 + 1);
LABEL_2:
  if ( !v5 )
    return 1;
  v6 = *((_DWORD *)v5 + 4);
  v7 = (char *)(v5 + 3);
  v8 = *((_DWORD *)v5 + 5);
  v13 = 0;
  while ( 1 )
  {
    if ( !v8 )
    {
      v5 = (__int64 *)*v5;
      goto LABEL_2;
    }
    if ( !PATH_CORE::newpathrec(this, &v14, &v13, v8) )
      return 0;
    v9 = v14;
    v10 = v13;
    *((_DWORD *)v14 + 4) = v6;
    *((_QWORD *)v9 + 1) = v2;
    *(_QWORD *)v9 = 0LL;
    if ( v8 > v10 )
    {
      if ( (v6 & 0x10) != 0 )
      {
        if ( (v6 & 1) != 0 )
          v10 = 3 * ((v10 - 1) / 3) + 1;
        else
          v10 = 3 * (v10 / 3);
        v13 = v10;
      }
      *((_DWORD *)v9 + 5) = v10;
      *((_DWORD *)v9 + 4) &= 0xFFFFFFF5;
      v6 &= 0xFFFFFFFA;
    }
    else
    {
      *((_DWORD *)v9 + 5) = v8;
    }
    *((_QWORD *)this + 2) = v9;
    if ( v2 )
      *v2 = v9;
    else
      *((_QWORD *)this + 1) = v9;
    memmove((char *)v9 + 24, v7, 8LL * *((unsigned int *)v9 + 5));
    v11 = *((unsigned int *)v9 + 5);
    v2 = v9;
    v8 -= v11;
    v7 += 8 * v11;
    *(_QWORD *)(*(_QWORD *)this + 8LL) = (char *)v9 + 8 * v11 + 24;
  }
}
