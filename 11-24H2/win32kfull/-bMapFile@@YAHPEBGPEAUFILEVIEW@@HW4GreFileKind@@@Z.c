/*
 * XREFs of ?bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140304B38
 * Callers:
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1403030C8 (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x140303F08 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 *     EngMapFile @ 0x140304DB0 (EngMapFile.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x14019F58C (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z @ 0x1401DA19C (-Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1401E09CC (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?bCreateSection@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x1403047F4 (-bCreateSection@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall bMapFile(const unsigned __int16 *a1, _OWORD *a2, unsigned int a3, int a4)
{
  unsigned int v8; // r14d
  struct NETWORKED_FONT_FILE_NODE *v9; // rdx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v15; // [rsp+28h] [rbp-39h] BYREF
  __int64 v16; // [rsp+30h] [rbp-31h]
  __int128 v17; // [rsp+38h] [rbp-29h]
  __int64 v18; // [rsp+48h] [rbp-19h]
  int v19; // [rsp+50h] [rbp-11h]
  _OWORD v20[2]; // [rsp+58h] [rbp-9h] BYREF
  __int128 v21; // [rsp+78h] [rbp+17h]
  __int128 v22; // [rsp+88h] [rbp+27h]
  __int128 v23; // [rsp+98h] [rbp+37h]

  memset_0(v20, 0, 0x50uLL);
  v8 = 0;
  if ( (unsigned int)bCreateSection(a1, (__int64)v20, a3, a4) )
  {
    v15 = 0LL;
    v16 = 0LL;
    v18 = 0LL;
    v19 = 5;
    v17 = 0LL;
    if ( (unsigned __int8)Gre::MapViewOfSectionObj::Map((__int64)&v15, v21, 3LL, 0LL) )
    {
      v10 = v20[1];
      *((_QWORD *)&v20[0] + 1) = v17;
      *a2 = v20[0];
      *(_QWORD *)&v17 = 0LL;
      v11 = v21;
      a2[1] = v10;
      v15 = 0LL;
      v12 = v22;
      a2[2] = v11;
      v16 = 0LL;
      v13 = v23;
      *((_QWORD *)&v17 + 1) = 0LL;
      v18 = 0LL;
      v8 = 1;
      a2[3] = v12;
      v19 = 5;
      a2[4] = v13;
    }
    else
    {
      vUnreferenceFileviewSection((struct FILEVIEW *)v20, v9);
    }
    Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v15);
  }
  return v8;
}
