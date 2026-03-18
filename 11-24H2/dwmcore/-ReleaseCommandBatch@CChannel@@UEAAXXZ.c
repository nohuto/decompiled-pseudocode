/*
 * XREFs of ?ReleaseCommandBatch@CChannel@@UEAAXXZ @ 0x1801B57A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CDataStreamWriter@@QEAA@XZ @ 0x180132210 (--1CDataStreamWriter@@QEAA@XZ.c)
 */

void __fastcall CChannel::ReleaseCommandBatch(CChannel *this)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rdx
  _QWORD *v5; // r8
  _QWORD *v6; // r10

  v1 = (_QWORD *)*((_QWORD *)this + 23);
  if ( v1 )
  {
    if ( *((_QWORD *)this + 22) )
    {
      CDataStreamWriter::~CDataStreamWriter(*((CDataStreamWriter **)this + 23));
      operator delete(v1);
    }
    else
    {
      v3 = (_QWORD *)*v1;
      if ( (_QWORD *)*v1 != v1 )
      {
        v4 = (_QWORD *)v1[1];
        if ( (_QWORD *)v3[1] != v1
          || (_QWORD *)*v4 != v1
          || (*v4 = v3, v5 = v1 + 2, v3[1] = v4, v6 = (_QWORD *)v1[3], *(_QWORD **)(v1[2] + 8LL) != v1 + 2)
          || (_QWORD *)*v6 != v5
          || *(_QWORD **)(*v3 + 8LL) != v3
          || (_QWORD *)*v4 != v3 )
        {
          __fastfail(3u);
        }
        *v6 = v3;
        v1[3] = v3[1];
        *(_QWORD *)v3[1] = v5;
        v3[1] = v6;
      }
      v1[1] = v1;
      *v1 = v1;
      v1[4] = 0LL;
      v1[5] = 0LL;
      v1[6] = 0LL;
      *((_DWORD *)v1 + 14) = 0;
      *((_QWORD *)this + 22) = *((_QWORD *)this + 23);
    }
    *((_QWORD *)this + 23) = 0LL;
  }
}
