/*
 * XREFs of ??1CSceneMeshRendererComponent@@MEAA@XZ @ 0x1802A3F68
 * Callers:
 *     ??_ECSceneMeshRendererComponent@@MEAAPEAXI@Z @ 0x1802A4080 (--_ECSceneMeshRendererComponent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@@Z @ 0x1802A3D70 (--$_Erase_head@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1802A4D04 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V-$com_ptr_t@UISpectreMaterial@.c)
 */

void __fastcall CSceneMeshRendererComponent::~CSceneMeshRendererComponent(CSceneMeshRendererComponent *this)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 *v4; // r8
  __int64 *v5; // rdx
  __int64 *v6; // rax
  __int64 *v7; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)this = &CSceneMeshRendererComponent::`vftable';
  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    v3 = v2 + 80;
    v4 = *(__int64 **)(v2 + 80);
    v5 = v4;
    v6 = (__int64 *)v4[1];
    v7 = v6;
    while ( !*((_BYTE *)v7 + 25) )
    {
      if ( v7[4] >= (unsigned __int64)this )
      {
        if ( *((_BYTE *)v5 + 25) && (unsigned __int64)this < v7[4] )
          v5 = v7;
        v4 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        v7 = (__int64 *)v7[2];
      }
    }
    if ( !*((_BYTE *)v5 + 25) )
      v6 = (__int64 *)*v5;
    while ( !*((_BYTE *)v6 + 25) )
    {
      if ( (unsigned __int64)this >= v6[4] )
      {
        v6 = (__int64 *)v6[2];
      }
      else
      {
        v5 = v6;
        v6 = (__int64 *)*v6;
      }
    }
    v8[1] = v5;
    v8[0] = v4;
    std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::_Erase(
      v3,
      v8);
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 11));
  }
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 12));
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
    (_QWORD **)this + 13,
    (__int64)this + 104);
  CSceneComponent::~CSceneComponent(this);
}
