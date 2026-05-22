/*
 * XREFs of ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801A2070
 * Callers:
 *     ?RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801A0DDC (-RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??1Edge@@QEAA@XZ @ 0x1801A0654 (--1Edge@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1801A1AD8 (--$_Emplace_reallocate@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAPEAVEdge@@.c)
 *     ??0Edge@@QEAA@AEBV0@@Z @ 0x1801A1E78 (--0Edge@@QEAA@AEBV0@@Z.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1801A22E8 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801A3078 (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Edges::AddOrUpdate(char **this, const unsigned __int16 *a2, struct EdgyControllerClientProxy *a3)
{
  unsigned int v6; // edi
  int Edge; // eax
  __int64 v9; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v10; // [rsp+38h] [rbp-A0h]
  __int64 v11; // [rsp+48h] [rbp-90h]
  __int64 v12; // [rsp+50h] [rbp-88h]
  __int64 v13; // [rsp+58h] [rbp-80h]
  int v14; // [rsp+60h] [rbp-78h]
  __int128 v15; // [rsp+64h] [rbp-74h]
  __int128 v16; // [rsp+74h] [rbp-64h]
  __int64 v17; // [rsp+84h] [rbp-54h]
  __int64 v18; // [rsp+8Ch] [rbp-4Ch]
  __int64 v19; // [rsp+98h] [rbp-40h]
  __int128 v20; // [rsp+A0h] [rbp-38h]

  v6 = 0;
  Edge = Edges::FindEdge((Edges *)this, a2);
  if ( Edge < 0 )
  {
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 7LL;
    LOWORD(v10) = 0;
    v13 = 0LL;
    v14 = 0;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    Edge::Set((Edge *)&v9, a2, a3);
    try
    {
      if ( this[1] == this[2] )
      {
        std::vector<Edge>::_Emplace_reallocate<Edge const &>(this, this[1], (const struct Edge *)&v9);
      }
      else
      {
        Edge::Edge((Edge *)this[1], (const struct Edge *)&v9);
        this[1] += 128;
      }
    }
    catch ( ... )
    {
      v6 = -2147024882;
    }
    Edge::~Edge((Edge *)&v9);
  }
  else
  {
    Edge::Set((Edge *)&(*this)[128 * (__int64)Edge], a2, a3);
  }
  return v6;
}
