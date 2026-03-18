/*
 * XREFs of ?GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z @ 0x1801AAA10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18007E6D0 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ??$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z @ 0x1801240CC (--$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimation::GetHandoffData(
        CAnimation *this,
        enum DwmAnimationHandoffType::Enum *a2,
        float *a3,
        unsigned __int64 *a4)
{
  __int64 v6; // rcx
  unsigned __int8 v9; // bp
  _BYTE *v10; // rdi
  __int64 result; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // xmm0_4
  __int64 v16; // [rsp+38h] [rbp-30h]
  _QWORD v17[5]; // [rsp+40h] [rbp-28h] BYREF

  v6 = *((_QWORD *)this + 13);
  v9 = 1;
  if ( !v6 )
    goto LABEL_2;
  v12 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(v6 + 136) > v12 )
    goto LABEL_2;
  v13 = *((_QWORD *)this + 14);
  if ( !*((_BYTE *)this + 177) )
    v13 += v12 - *((_QWORD *)this + 15);
  result = CAnimationInterpolator::GetAnimationValue((CAnimationInterpolator *)(v6 + 248), v13, (float *)this + 40, 0LL);
  v9 = result;
  if ( (_BYTE)result )
  {
    ReleaseInterface<IDXGIFactory7>((__int64 *)this + 13);
LABEL_2:
    v10 = (char *)this + 178;
    *(_DWORD *)a2 = *((_DWORD *)this + 23);
    *a3 = *((float *)this + 40);
    *a4 = *((_QWORD *)this + 12);
    if ( !*((_BYTE *)this + 178) && *((_DWORD *)this + 42) && *((_DWORD *)this + 41) )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this - 12) + 6392LL) + 72LL))(
              *(_QWORD *)(*((_QWORD *)this - 12) + 6392LL),
              1LL);
      if ( v14 )
      {
        v15 = *((_DWORD *)this + 40);
        v17[0] = *((unsigned int *)this + 42);
        v17[1] = *((unsigned int *)this + 41);
        CoreUICallSend(v14, v17, 2LL, 1LL, 1, &unk_18032BF10, v15, v16, v17[0]);
        v10 = (char *)this + 178;
      }
      *v10 = 1;
    }
    return v9;
  }
  return result;
}
