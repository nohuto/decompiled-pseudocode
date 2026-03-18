/*
 * XREFs of ?_GetContiguousEDID@EdidMonitorDescriptor@DxgMonitor@@AEBAXIPEAIPEAE@Z @ 0x1403D6C48
 * Callers:
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1403D6B70 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgMonitor::EdidMonitorDescriptor::_GetContiguousEDID(
        DxgMonitor::EdidMonitorDescriptor *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  unsigned int v4; // r10d
  __int64 v6; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  _OWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  _OWORD *v15; // r8

  v4 = 0;
  v6 = 0LL;
  while ( 1 )
  {
    if ( !v4 )
    {
      v11 = 0LL;
      v13 = **((_QWORD **)this + 3);
      v14 = *(_QWORD *)(v13 + 16);
      v15 = (_OWORD *)(v13 + 24);
      if ( v14 >= 0x80 )
        v11 = v15;
      goto LABEL_7;
    }
    if ( v4 >= *((_DWORD *)this + 4) )
      break;
    v9 = *((_QWORD *)this + 3);
    if ( !v9 )
      break;
    v10 = *(_QWORD *)(v6 + v9);
    if ( *(_QWORD *)(v10 + 16) < 0x80uLL )
      break;
    v11 = (_OWORD *)(v10 + 24);
LABEL_7:
    if ( v11 )
    {
      v12 = v4 << 7;
      if ( (int)v12 + 128 <= a2 )
      {
        ++v4;
        v6 += 8LL;
        *(_OWORD *)&a4[v12] = *v11;
        *(_OWORD *)&a4[v12 + 16] = v11[1];
        *(_OWORD *)&a4[v12 + 32] = v11[2];
        *(_OWORD *)&a4[v12 + 48] = v11[3];
        *(_OWORD *)&a4[v12 + 64] = v11[4];
        *(_OWORD *)&a4[v12 + 80] = v11[5];
        *(_OWORD *)&a4[v12 + 96] = v11[6];
        *(_OWORD *)&a4[v12 + 112] = v11[7];
        if ( v4 < 0x37 )
          continue;
      }
    }
    break;
  }
  *a3 = v4 << 7;
}
