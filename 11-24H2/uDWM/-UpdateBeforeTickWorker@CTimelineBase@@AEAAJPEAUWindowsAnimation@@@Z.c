/*
 * XREFs of ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x18006689C
 * Callers:
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180026AA0 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x180027E44 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTimelineBase::UpdateBeforeTickWorker(CTimelineBase *this, struct WindowsAnimation *a2)
{
  _QWORD *v2; // rbx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ebx
  int v10; // ecx
  __int64 v11; // r8
  _QWORD *v12; // r14
  __int64 v13; // rcx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  unsigned int v19; // [rsp+20h] [rbp-40h]
  __int64 v20; // [rsp+90h] [rbp+30h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+40h] BYREF

  v2 = (_QWORD *)((char *)this + 64);
  v20 = 0LL;
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
    goto LABEL_11;
  }
  if ( !*(_QWORD *)a2 )
  {
    v9 = -2147221008;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147221008, 0xB1u, 0LL);
    goto LABEL_11;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, struct WindowsAnimation *, _QWORD *))(**(_QWORD **)a2 + 32LL))(
         *(_QWORD *)a2,
         a2,
         v2);
  v9 = v6;
  if ( v6 < 0 )
  {
    v19 = 179;
    goto LABEL_24;
  }
  v10 = *((_DWORD *)this + 14);
  if ( !v10 )
  {
LABEL_7:
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)a2 + 1) + 64LL))(
           *((_QWORD *)a2 + 1),
           v7,
           v8,
           &v20);
    v9 = v6;
    if ( v6 < 0 )
    {
      v19 = 194;
      goto LABEL_24;
    }
    goto LABEL_8;
  }
  v15 = v10 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 != 1 )
            goto LABEL_7;
          v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 160LL))(*((_QWORD *)a2 + 1));
          v9 = v6;
          if ( v6 < 0 )
          {
            v19 = 245;
            goto LABEL_24;
          }
        }
        else
        {
          v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)a2 + 1) + 40LL))(
                 *((_QWORD *)a2 + 1),
                 v7,
                 &v20);
          v9 = v6;
          if ( v6 < 0 )
          {
            v19 = 235;
            goto LABEL_24;
          }
        }
      }
      else
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 128LL))(*((_QWORD *)a2 + 1));
        v9 = v6;
        if ( v6 < 0 )
        {
          v19 = 229;
          goto LABEL_24;
        }
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 48LL))(v20);
        v9 = v6;
        if ( v6 < 0 )
        {
          v19 = 230;
          goto LABEL_24;
        }
      }
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 152LL))(*((_QWORD *)a2 + 1));
      v9 = v6;
      if ( v6 < 0 )
      {
        v19 = 217;
        goto LABEL_24;
      }
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 48LL))(v20);
      v9 = v6;
      if ( v6 < 0 )
      {
        v19 = 218;
        goto LABEL_24;
      }
    }
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 128LL))(*((_QWORD *)a2 + 1));
    v9 = v6;
    if ( v6 < 0 )
    {
      v19 = 205;
      goto LABEL_24;
    }
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 48LL))(v20);
    v9 = v6;
    if ( v6 < 0 )
    {
      v19 = 206;
      goto LABEL_24;
    }
  }
LABEL_8:
  v12 = (_QWORD *)((char *)a2 + 16);
  if ( *((_QWORD *)a2 + 2)
    || (v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2, (char *)a2 + 16),
        v9 = v6,
        v6 >= 0) )
  {
    v13 = *v12;
    if ( *((double *)this + 10) == 0.0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v13 + 24LL))(
             v13,
             *((_QWORD *)this + 8),
             v20);
      v9 = v6;
      if ( v6 >= 0 )
        goto LABEL_11;
      v19 = 255;
    }
    else
    {
      v21 = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v13 + 32LL))(
             v13,
             -1LL,
             v11,
             &v21);
      v9 = v6;
      if ( v6 < 0 )
      {
        v19 = 260;
      }
      else
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)*v12 + 48LL))(
               *v12,
               *((_QWORD *)this + 8),
               v20,
               v21);
        v9 = v6;
        if ( v6 >= 0 )
          goto LABEL_11;
        v19 = 261;
      }
    }
  }
  else
  {
    v19 = 251;
  }
LABEL_24:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v19, 0LL);
LABEL_11:
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return v9;
}
