/*
 * XREFs of ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14001DF10
 * Callers:
 *     _lambda_d1a8b950306abda3aed68804ea97f7ae_::operator() @ 0x14001D40C (_lambda_d1a8b950306abda3aed68804ea97f7ae_--operator().c)
 * Callees:
 *     ?AtlComModuleRegisterClassObjects@ATL@@YAJPEAU_ATL_COM_MODULE70@1@KK@Z @ 0x14001DFF8 (-AtlComModuleRegisterClassObjects@ATL@@YAJPEAU_ATL_COM_MODULE70@1@KK@Z.c)
 *     ??1CHandle@ATL@@QEAA@XZ @ 0x140065104 (--1CHandle@ATL@@QEAA@XZ.c)
 */

int __fastcall ATL::CAtlExeModuleT<CAudioDGModule>::PreMessageLoop(__int64 a1, unsigned int a2)
{
  int result; // eax
  HRESULT v4; // ebx
  struct ATL::_ATL_OBJMAP_ENTRY30 **v5; // rdi
  HRESULT v6; // eax
  struct ATL::_ATL_OBJMAP_ENTRY30 **v7; // rcx
  struct ATL::_ATL_OBJMAP_ENTRY30 *v8; // rdx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  result = ATL::AtlComModuleRegisterClassObjects((struct ATL::_ATL_COM_MODULE70 *)a1, a2, 5u);
  v4 = result;
  if ( result >= 0 )
  {
    if ( result )
    {
      *(_BYTE *)(a1 + 96) = 0;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 96) )
      {
        v9 = -1LL;
        v4 = CoResumeClassObjects();
        if ( v4 < 0 )
        {
          SetEvent(*(HANDLE *)(a1 + 80));
          WaitForSingleObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, 2 * *(_DWORD *)(a1 + 88));
        }
        ATL::CHandle::~CHandle((ATL::CHandle *)&v9);
      }
      else
      {
        v4 = CoResumeClassObjects();
      }
      if ( v4 < 0 )
      {
        v5 = off_1400C3510;
        v6 = 0;
        v7 = (struct ATL::_ATL_OBJMAP_ENTRY30 **)off_1400C3518;
        while ( v5 < v7 && !v6 )
        {
          v8 = *v5;
          if ( *v5 )
          {
            if ( *((_DWORD *)v8 + 10) )
            {
              v6 = CoRevokeClassObject(*((_DWORD *)v8 + 10));
              v7 = (struct ATL::_ATL_OBJMAP_ENTRY30 **)off_1400C3518;
            }
          }
          ++v5;
        }
      }
    }
    return v4;
  }
  return result;
}
