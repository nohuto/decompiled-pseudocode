/*
 * XREFs of ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x18004713C
 * Callers:
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180046780 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 * Callees:
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x180021DF4 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTimelineBase::UpdateBeforeTickWorker(CTimelineBase *this, struct WindowsAnimation *a2)
{
  _QWORD *v2; // r15
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ebx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // r8
  __int64 **v16; // r14
  __int64 *v17; // rcx
  __int64 v18; // rax
  unsigned int v20; // [rsp+20h] [rbp-40h]
  __int64 v21; // [rsp+90h] [rbp+30h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+40h] BYREF

  v2 = (_QWORD *)((char *)this + 64);
  v21 = 0LL;
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *v2 = 0LL;
  }
  if ( *((double *)this + 3) < 0.01 )
  {
    CTimelineBase::JumpToFinalValue(this);
    v9 = 0;
    goto LABEL_16;
  }
  if ( !*(_QWORD *)a2 )
  {
    v9 = -2147221008;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147221008, 0xB3u, 0LL);
    goto LABEL_16;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, struct WindowsAnimation *, _QWORD *))(**(_QWORD **)a2 + 32LL))(
         *(_QWORD *)a2,
         a2,
         v2);
  v9 = v6;
  if ( v6 < 0 )
  {
    v20 = 181;
    goto LABEL_46;
  }
  v10 = *((_DWORD *)this + 14);
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 128LL))(*((_QWORD *)a2 + 1));
      v9 = v6;
      if ( v6 < 0 )
      {
        v20 = 207;
        goto LABEL_46;
      }
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 48LL))(v21);
      v9 = v6;
      if ( v6 < 0 )
      {
        v20 = 208;
        goto LABEL_46;
      }
      goto LABEL_13;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 152LL))(*((_QWORD *)a2 + 1));
      v9 = v6;
      if ( v6 < 0 )
      {
        v20 = 219;
        goto LABEL_46;
      }
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 48LL))(v21);
      v9 = v6;
      if ( v6 < 0 )
      {
        v20 = 220;
        goto LABEL_46;
      }
      goto LABEL_13;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 128LL))(*((_QWORD *)a2 + 1));
      v9 = v6;
      if ( v6 < 0 )
      {
        v20 = 231;
        goto LABEL_46;
      }
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 48LL))(v21);
      v9 = v6;
      if ( v6 < 0 )
      {
        v20 = 232;
        goto LABEL_46;
      }
      goto LABEL_13;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)a2 + 1) + 40LL))(
             *((_QWORD *)a2 + 1),
             v7,
             &v21);
      v9 = v6;
      if ( v6 < 0 )
      {
        v20 = 237;
        goto LABEL_46;
      }
      goto LABEL_13;
    }
    if ( v14 == 1 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 160LL))(*((_QWORD *)a2 + 1));
      v9 = v6;
      if ( v6 < 0 )
      {
        v20 = 247;
        goto LABEL_46;
      }
      goto LABEL_13;
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)a2 + 1) + 64LL))(
         *((_QWORD *)a2 + 1),
         v7,
         v8,
         &v21);
  v9 = v6;
  if ( v6 < 0 )
  {
    v20 = 196;
    goto LABEL_46;
  }
LABEL_13:
  v16 = (__int64 **)((char *)a2 + 16);
  if ( *((_QWORD *)a2 + 2)
    || (v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2, (char *)a2 + 16),
        v9 = v6,
        v6 >= 0) )
  {
    v17 = *v16;
    v18 = **v16;
    if ( *((double *)this + 10) == 0.0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(v18 + 24))(v17, *v2, v21);
      v9 = v6;
      if ( v6 >= 0 )
        goto LABEL_16;
      v20 = 257;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64 *))(v18 + 32))(v17, -1LL, v15, &v22);
      v9 = v6;
      if ( v6 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(**v16 + 48))(*v16, *v2, v21, v22);
        v9 = v6;
        if ( v6 >= 0 )
          goto LABEL_16;
        v20 = 263;
      }
      else
      {
        v20 = 262;
      }
    }
  }
  else
  {
    v20 = 253;
  }
LABEL_46:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v20, 0LL);
LABEL_16:
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  return v9;
}
