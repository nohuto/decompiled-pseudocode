/*
 * XREFs of ?SaveKsrState@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJIPEAEPEAI@Z @ 0x14021A450
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::SaveKsrState(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  unsigned int v8; // ebx
  int v9; // r10d
  unsigned int v11; // edx
  unsigned int i; // r8d
  __int64 v13; // r9
  unsigned int v14; // ecx
  unsigned __int64 v15; // rdx
  unsigned __int8 *v16; // rdx
  unsigned int j; // r8d
  __int64 v18; // r9
  unsigned __int8 *v19; // r10
  unsigned int v20; // r11d
  __int64 v21; // rax
  __int64 v22; // rcx
  _BYTE v23[32]; // [rsp+50h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v23, this + 5);
  v8 = 0;
  *a4 = 0;
  v9 = *((_DWORD *)this + 4);
  if ( !v9 )
  {
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
    return 0LL;
  }
  v11 = 4;
  for ( i = 0; i < *((_DWORD *)this + 3); ++i )
  {
    v13 = *((_QWORD *)this[3] + i);
    if ( v13 )
    {
      v14 = v11 + 16;
      if ( v11 + 16 < v11 )
      {
        WdLogSingleEntry1(2LL, -1073741675LL);
        WdLogGlobalForLineNumber = 1864;
        goto LABEL_13;
      }
      v15 = 24LL * *(unsigned int *)(v13 + 168);
      if ( v15 > 0xFFFFFFFF )
      {
        WdLogSingleEntry1(2LL, -1073741675LL);
        WdLogGlobalForLineNumber = 1872;
        goto LABEL_13;
      }
      v11 = v14 + v15;
      if ( v11 < v14 )
      {
        WdLogSingleEntry1(2LL, -1073741675LL);
        WdLogGlobalForLineNumber = 1879;
LABEL_13:
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to calculate KSR TotalSize: 0x%I64x",
          -1073741675LL,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
        return 3221225621LL;
      }
    }
  }
  if ( !a3 )
    goto LABEL_24;
  if ( v11 <= a2 )
  {
    *(_DWORD *)a3 = v9;
    v16 = a3 + 4;
    for ( j = 0; j < *((_DWORD *)this + 3); ++j )
    {
      v18 = *((_QWORD *)this[3] + j);
      if ( v18 )
      {
        v19 = v16;
        *(_DWORD *)v16 = *(_DWORD *)(v18 + 24);
        v20 = 0;
        *((_DWORD *)v16 + 2) = *(_DWORD *)(v18 + 168);
        v16 += 16;
        if ( *(_DWORD *)(v18 + 168) )
        {
          do
          {
            v21 = v20++;
            v22 = *(_QWORD *)(v18 + 184) + 112 * v21;
            *((_QWORD *)v16 + 1) = *(_QWORD *)(v22 + 8);
            *(_DWORD *)v16 = *(_DWORD *)(v22 + 28);
            *((_DWORD *)v16 + 1) = *(_DWORD *)(v22 + 24);
            *((_QWORD *)v16 + 2) = *(_QWORD *)(v22 + 16);
            v16 += 24;
          }
          while ( v20 < *(_DWORD *)(v18 + 168) );
        }
        *((_DWORD *)v19 + 3) = (_DWORD)v16 - (_DWORD)v19;
      }
    }
    v11 = (_DWORD)v16 - (_DWORD)a3;
LABEL_24:
    *a4 = v11;
    goto LABEL_25;
  }
  v8 = -1073741789;
LABEL_25:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
  return v8;
}
