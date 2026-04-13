/*
 * XREFs of ??$CreateClassFactory@V?$SimpleClassFactory@VMobilityExperienceManager@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800A7200
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VMobilityExperienceManager@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VMobilityExperienceManager@@$0A@@12@@Z @ 0x1800A72CC (--$MakeAndInitialize@V-$SimpleClassFactory@VMobilityExperienceManager@@$0A@@WRL@Microsoft@@V123@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateClassFactory<Microsoft::WRL::SimpleClassFactory<MobilityExperienceManager,0>>(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // ebx
  _DWORD *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  _DWORD *v12; // [rsp+20h] [rbp-18h] BYREF

  v12 = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::SimpleClassFactory<MobilityExperienceManager,0>,Microsoft::WRL::SimpleClassFactory<MobilityExperienceManager,0>,>(&v12);
  if ( v7 >= 0 )
  {
    v9 = v12;
    v12[5] = *a1;
    v10 = (**(__int64 (__fastcall ***)(_DWORD *, __int64, __int64))v9)(v9, a3, a4);
    v11 = v10;
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      if ( v10 < 0 )
      {
        v9[5] &= 0xFFFFFFFA;
      }
      else if ( (*(_BYTE *)a1 & 4) != 0 )
      {
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      else
      {
        v9 = 0LL;
      }
    }
    if ( v9 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
    return v11;
  }
  else
  {
    if ( v12 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 16LL))(v12);
    return (unsigned int)v7;
  }
}
