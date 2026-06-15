/*
 * XREFs of ??0RemapPolicyRule@@QEAA@XZ @ 0x180124AC4
 * Callers:
 *     ??$MakeAndInitialize@VCommunicationsRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x180124748 (--$MakeAndInitialize@VCommunicationsRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU.c)
 *     ??$MakeAndInitialize@VRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x180124828 (--$MakeAndInitialize@VRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutin.c)
 * Callees:
 *     ??0PolicyRule@@QEAA@XZ @ 0x180124A58 (--0PolicyRule@@QEAA@XZ.c)
 */

RemapPolicyRule *__fastcall RemapPolicyRule::RemapPolicyRule(RemapPolicyRule *this)
{
  PolicyRule::PolicyRule(this);
  *(_QWORD *)this = &RemapPolicyRule::`vftable';
  return this;
}
