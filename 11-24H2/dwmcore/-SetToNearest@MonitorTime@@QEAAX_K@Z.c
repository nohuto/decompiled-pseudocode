/*
 * XREFs of ?SetToNearest@MonitorTime@@QEAAX_K@Z @ 0x1801BEB30
 * Callers:
 *     ?BeginCompositionFrame@CComposition@@IEAAJXZ @ 0x18007C6F0 (-BeginCompositionFrame@CComposition@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MonitorTime::SetToNearest(MonitorTime *this, __int64 a2)
{
  unsigned __int64 v2; // r10
  __int64 v4; // r9
  int v5; // r11d
  unsigned __int64 v6; // rax
  unsigned int v7; // ecx

  v2 = *((_QWORD *)this + 1);
  v4 = *(_QWORD *)this;
  v5 = *((_DWORD *)this + 4);
  v6 = a2 + (v2 >> 1);
  if ( v6 < *(_QWORD *)this )
  {
    v7 = (v4 - v6) / v2 + 1;
    *((_DWORD *)this + 4) = v5 - v7;
    *(_QWORD *)this = v4 - v2 * v7;
  }
  else
  {
    *((_DWORD *)this + 4) = v5 + (v6 - v4) / v2;
    *(_QWORD *)this = v4 + v2 * (unsigned int)((v6 - v4) / v2);
  }
}
