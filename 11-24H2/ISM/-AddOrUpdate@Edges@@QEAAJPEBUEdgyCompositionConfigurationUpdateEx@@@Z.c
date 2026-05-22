/*
 * XREFs of ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801A97A4
 * Callers:
 *     ?OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z @ 0x1801A82A0 (-OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??1Edge@@QEAA@XZ @ 0x1801A7C64 (--1Edge@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1801A90E8 (--$_Emplace_reallocate@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAPEAVEdge@@.c)
 *     ??0Edge@@QEAA@AEBV0@@Z @ 0x1801A9488 (--0Edge@@QEAA@AEBV0@@Z.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1801A98F8 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AA77C (-Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Edges::AddOrUpdate(char **this, const struct EdgyCompositionConfigurationUpdateEx *a2)
{
  unsigned int v4; // edi
  int Edge; // eax
  __int64 v7; // [rsp+30h] [rbp-98h] BYREF
  __int128 v8; // [rsp+38h] [rbp-90h]
  __int64 v9; // [rsp+48h] [rbp-80h]
  __int64 v10; // [rsp+50h] [rbp-78h]
  __int64 v11; // [rsp+58h] [rbp-70h]
  int v12; // [rsp+60h] [rbp-68h]
  __int128 v13; // [rsp+64h] [rbp-64h]
  __int128 v14; // [rsp+74h] [rbp-54h]
  __int64 v15; // [rsp+84h] [rbp-44h]
  __int64 v16; // [rsp+8Ch] [rbp-3Ch]
  __int64 v17; // [rsp+98h] [rbp-30h]
  __int128 v18; // [rsp+A0h] [rbp-28h]

  v4 = 0;
  Edge = Edges::FindEdge((Edges *)this, (const unsigned __int16 *)a2 + 12);
  if ( Edge < 0 )
  {
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    v10 = 7LL;
    LOWORD(v8) = 0;
    v11 = 0LL;
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    Edge::Set((Edge *)&v7, a2);
    try
    {
      if ( this[1] == this[2] )
      {
        std::vector<Edge>::_Emplace_reallocate<Edge const &>(this, this[1], (const struct Edge *)&v7);
      }
      else
      {
        Edge::Edge((Edge *)this[1], (const struct Edge *)&v7);
        this[1] += 128;
      }
    }
    catch ( ... )
    {
      v4 = -2147024882;
    }
    Edge::~Edge((Edge *)&v7);
  }
  else
  {
    Edge::Set((Edge *)&(*this)[128 * (__int64)Edge], a2);
  }
  return v4;
}
