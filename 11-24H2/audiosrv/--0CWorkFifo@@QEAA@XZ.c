/*
 * XREFs of ??0CWorkFifo@@QEAA@XZ @ 0x18011FAA4
 * Callers:
 *     ??0CSpatialAudioResourceManager@Sarm@@QEAA@XZ @ 0x18011F954 (--0CSpatialAudioResourceManager@Sarm@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0_Mutex_base@std@@QEAA@H@Z @ 0x1800CB71C (--0_Mutex_base@std@@QEAA@H@Z.c)
 *     ??$_Construct_in_place@U_Container_proxy@std@@PEAU_Container_base12@2@@std@@YAXAEAU_Container_proxy@0@$$QEAPEAU_Container_base12@0@@Z @ 0x18011F8B8 (--$_Construct_in_place@U_Container_proxy@std@@PEAU_Container_base12@2@@std@@YAXAEAU_Container_pr.c)
 */

CWorkFifo *__fastcall CWorkFifo::CWorkFifo(CWorkFifo *this)
{
  CWorkFifo *v1; // rbx
  _QWORD *v3; // rax
  CWorkFifo **v4; // rcx
  CWorkFifo *result; // rax
  CWorkFifo *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = this;
  v1 = (CWorkFifo *)((char *)this + 96);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v6 = v1;
  std::_Construct_in_place<std::_Container_proxy,std::_Container_base12 *>(v3, (__int64 *)&v6);
  *(_QWORD *)v1 = v4;
  *v4 = v1;
  *((_WORD *)this + 68) = 0;
  std::_Mutex_base::_Mutex_base((CWorkFifo *)((char *)this + 144), 256);
  result = this;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 6) = 3;
  *((_DWORD *)this + 21) = 1;
  *((_DWORD *)this + 22) = 72;
  return result;
}
