/*
 * XREFs of ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x140303F08
 * Callers:
 *     EngMapFontFile @ 0x140304E50 (EngMapFontFile.c)
 * Callees:
 *     ?bMapRoutine@@YAHPEAUFONTFILEVIEW@@PEAUFILEVIEW@@W4_MAP_MODE@@@Z @ 0x1401B1BF4 (-bMapRoutine@@YAHPEAUFONTFILEVIEW@@PEAUFILEVIEW@@W4_MAP_MODE@@@Z.c)
 *     ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z @ 0x1401DA19C (-Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1401E09CC (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?vUnmapFile@@YAXPEAUFILEVIEW@@H@Z @ 0x140222110 (-vUnmapFile@@YAXPEAUFILEVIEW@@H@Z.c)
 *     ?bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140304B38 (-bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall EngMapFontFileInternal(__int64 a1, unsigned int **a2, unsigned int *a3)
{
  struct _FAST_MUTEX **v5; // r12
  unsigned int v6; // edi
  int v7; // r15d
  _QWORD *v8; // r14
  __int64 v9; // rdx
  unsigned __int8 v10; // al
  unsigned int v11; // esi
  __int64 v13; // [rsp+28h] [rbp-49h] BYREF
  __int64 v14; // [rsp+30h] [rbp-41h]
  __int128 v15; // [rsp+38h] [rbp-39h]
  __int64 v16; // [rsp+48h] [rbp-29h]
  int v17; // [rsp+50h] [rbp-21h]
  _BYTE v18[80]; // [rsp+58h] [rbp-19h] BYREF

  v5 = (struct _FAST_MUTEX **)Gre::Base::Globals((Gre::Base *)a1);
  memset_0(v18, 0, sizeof(v18));
  v6 = 1;
  v7 = 1;
  KeAcquireGuardedMutex(*v5 + 26);
  if ( *(_QWORD *)(a1 + 8) )
  {
    v7 = 0;
    ++*(_DWORD *)(a1 + 96);
LABEL_8:
    v8 = (_QWORD *)(a1 + 80);
    goto LABEL_9;
  }
  v8 = (_QWORD *)(a1 + 80);
  if ( *(_QWORD *)(a1 + 80) )
  {
    v9 = *(_QWORD *)(a1 + 32);
    if ( v9 )
    {
      v13 = 0LL;
      v14 = 0LL;
      v16 = 0LL;
      v17 = 5;
      v15 = 0LL;
      v10 = Gre::MapViewOfSectionObj::Map((__int64)&v13, v9, 3LL, 0LL);
      v6 = v10;
      if ( v10 )
      {
        *(_QWORD *)(a1 + 8) = v15;
        *(_DWORD *)(a1 + 24) = v16;
        v16 = 0LL;
        *(_DWORD *)(a1 + 96) = 1;
        v15 = 0uLL;
        v13 = 0LL;
        v14 = 0LL;
        v17 = 5;
      }
      v7 = 0;
      Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v13);
      goto LABEL_8;
    }
  }
LABEL_9:
  KeReleaseGuardedMutex(*v5 + 26);
  if ( v7 )
  {
    if ( !(unsigned int)bMapFile(*v8, v18, 0LL, 1LL, v13) )
      return 0;
    KeAcquireGuardedMutex(*v5 + 26);
    ++*(_DWORD *)(a1 + 96);
    if ( *(_QWORD *)(a1 + 8) )
    {
      v11 = 0;
    }
    else
    {
      v11 = bMapRoutine(a1, (__int64)v18, 0);
      v6 = v11;
    }
    KeReleaseGuardedMutex(*v5 + 26);
    if ( !v11 )
      vUnmapFile((struct FILEVIEW *)v18);
  }
  if ( v6 )
  {
    if ( a2 )
      *a2 = *(unsigned int **)(a1 + 8);
    if ( a3 )
      *a3 = *(_DWORD *)(a1 + 24);
  }
  return v6;
}
