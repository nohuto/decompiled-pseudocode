/*
 * XREFs of ?Create@CSharedCircularQueue@@SAJV?$span@$$CBE$0?0@gsl@@IPEAPEAV1@@Z @ 0x18029AFAC
 * Callers:
 *     ?Create@CSharedCircularQueueProducer@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@@Z @ 0x18029B060 (-Create@CSharedCircularQueueProducer@@SAJV-$span@E$0-0@gsl@@IPEAPEAV1@@Z.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x1802B0CAC (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 *     ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSectionBase@@III@Z @ 0x1802B509C (-Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSectionBase@@III@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSharedCircularQueue::Create(unsigned int *a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // rbp
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // r8
  __int64 result; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)a1 + 1);
  v5 = a2;
  if ( (v3 & 3) != 0 || a2 - 1 > 0xFF || (v6 = *a1, v6 < (unsigned __int64)(2 * a2) + 8) )
  {
    v10 = -2147024809;
    v11 = 54LL;
  }
  else
  {
    v7 = MIDL_user_allocate(0x10uLL);
    v8 = v7;
    if ( v7 )
    {
      *(_QWORD *)v7 = v3;
      v7[2] = v5;
      v7[3] = (v6 - 8) / v5;
      result = 0LL;
      *a3 = v8;
      return result;
    }
    *a3 = 0LL;
    v10 = -2147024882;
    v11 = 61LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"onecoreuap\\windows\\DWM\\common\\shared\\SharedCircularQueue.h",
    (const char *)v10);
  return v10;
}
