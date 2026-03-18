/*
 * XREFs of ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x140175318
 * Callers:
 *     GreCreateDisplayDC @ 0x14000E640 (GreCreateDisplayDC.c)
 * Callees:
 *     HmgModifyHandleType @ 0x140016130 (HmgModifyHandleType.c)
 *     HmgIncrementShareReferenceCount @ 0x1400357D0 (HmgIncrementShareReferenceCount.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x1400B8540 (--0XDCOBJ@@QEAA@XZ.c)
 *     HmgAlloc @ 0x140173F20 (HmgAlloc.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, HDEV a2, unsigned int a3, int a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  __int64 SessionState; // rax
  __int64 v13; // rdx
  __int64 v14; // r10
  __int64 v15; // r8
  _OWORD *v16; // rax
  _OWORD *v17; // rcx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  _OWORD *v20; // rcx
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int64 v23; // rax
  __int64 v24; // rax

  XDCOBJ::XDCOBJ(this);
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 10) = 0;
  if ( a3 <= 2 )
  {
    v8 = (_QWORD *)HmgAlloc(2128LL);
    *(_QWORD *)this = v8;
    v11 = v8;
    if ( v8 )
    {
      if ( a4 )
        HmgModifyHandleType(*v8 | 0x210000LL, v9);
      SessionState = W32GetSessionState(v10);
      v13 = 3LL;
      v14 = 3LL;
      v15 = *(_QWORD *)(SessionState + 88);
      v16 = v11 + 68;
      v17 = (_OWORD *)(v15 + 144);
      do
      {
        *v16 = *v17;
        v16[1] = v17[1];
        v16[2] = v17[2];
        v16[3] = v17[3];
        v16[4] = v17[4];
        v16[5] = v17[5];
        v16[6] = v17[6];
        v16 += 8;
        v18 = v17[7];
        v17 += 8;
        *(v16 - 1) = v18;
        --v14;
      }
      while ( v14 );
      *v16 = *v17;
      v16[1] = v17[1];
      v19 = v17[2];
      v11[122] = v11 + 68;
      v20 = (_OWORD *)(v15 + 584);
      v16[2] = v19;
      v21 = v11 + 10;
      do
      {
        *v21 = *v20;
        v21[1] = v20[1];
        v21[2] = v20[2];
        v21[3] = v20[3];
        v21[4] = v20[4];
        v21[5] = v20[5];
        v21[6] = v20[6];
        v21 += 8;
        v22 = v20[7];
        v20 += 8;
        *(v21 - 1) = v22;
        --v13;
      }
      while ( v13 );
      *v21 = *v20;
      v21[1] = v20[1];
      v21[2] = v20[2];
      v21[3] = v20[3];
      v21[4] = v20[4];
      HmgIncrementShareReferenceCount(*(struct _BASEOBJECT **)(*(_QWORD *)this + 136LL));
      HmgIncrementShareReferenceCount(*(struct _BASEOBJECT **)(*(_QWORD *)this + 144LL));
      HmgIncrementShareReferenceCount(*(struct _BASEOBJECT **)(*(_QWORD *)this + 96LL));
      *((_DWORD *)v11 + 8) = a3;
      *(_QWORD *)((char *)v11 + 36) = 0LL;
      *((_DWORD *)v11 + 11) = 0;
      v11[149] = 0LL;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 152LL) = 1179679;
      v23 = *(_QWORD *)this + 176LL;
      v11[220] = 0LL;
      v11[157] = v23;
      v11[174] = v23;
      v11[191] = v23;
      v11[208] = v23;
      v11[218] = 0LL;
      *((_DWORD *)v11 + 438) = 0;
      *(_DWORD *)(*(_QWORD *)this + 2092LL) = -1;
      *(_WORD *)(*(_QWORD *)this + 2088LL) = -1;
      v24 = *(_QWORD *)this;
      *(_QWORD *)(v24 + 1112) = 0LL;
      *(_QWORD *)(v24 + 1120) = 0LL;
      v11[142] = 0LL;
      v11[259] = 0LL;
      v11[260] = 0LL;
      v11[6] = a2;
    }
  }
  return this;
}
